#include "LCD12864.h"

#include "Sprites.h"

const uint8_t LCD12864::DEFAULTTIME = 80;
const uint8_t LCD12864::BITMASK[] =
{
  B10000000, B01000000, B00100000, B00010000,
  B00001000, B00000100, B00000010, B00000001
};

LCD12864::LCD12864() {
  this->_delaytime = DEFAULTTIME;
}

void LCD12864::Initialise(uint8_t RS, uint8_t RW, uint8_t EN, uint8_t D0,
  uint8_t D1, uint8_t D2, uint8_t D3, uint8_t D4, uint8_t D5, uint8_t D6,
  uint8_t D7, uint8_t CSEL1)
{
  _rs_pin = RS;
  _rw_pin = RW;
  _en_pin = EN;
  _d0_pin = D0;
  _d1_pin = D1;
  _d2_pin = D2;
  _d3_pin = D3;
  _d4_pin = D4;
  _d5_pin = D5;
  _d6_pin = D6;
  _d7_pin = D7;
  _csel1_pin = CSEL1;

  pinMode(CSEL1, OUTPUT);
  pinMode(RS, OUTPUT);
  pinMode(RW, OUTPUT);
  pinMode(EN, OUTPUT);
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);

  // Select CS1
  DelayExecTime();
  digitalWrite(EN, 1);
  DelayExecTime();
  digitalWrite(CSEL1, 1);
  DelayExecTime();
  digitalWrite(EN, 0);
  DelayExecTime();

  Clear();
}

void LCD12864::Clear()
{
  ClearScreen();
  ClearScreenBuffer();
}

void LCD12864::ClearScreen()
{
  SetPins(0, 0, B00110000); // Basic instruction
  SetPins(0, 0, B00000001); // Clear
  delay(10);
  SetPins(0, 0, B00110100); // Extended
  delay(10);
}

void LCD12864::ClearScreenBuffer()
{
  ClearScreenBuffer(0, 0, 16, 64);
}

void LCD12864::ClearScreenBuffer(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2)
{
  for (uint8_t i = x1; i < x2; ++i)
  {
    for (uint8_t j = y1; j < y2; ++j)
    {
      _screenBuffer[i][j] = 0;
    }
  }
}

void LCD12864::RenderScreenBuffer()
{
  RenderScreenBuffer(0, 0, 16, 64);
}

void LCD12864::RenderScreenBuffer(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2) {
  // x1 must be even because Ram Address can only be set to even addresses
  if (x1 % 2 != 0) --x1;

  for (uint8_t y = y1; y < y2; ++y)
  {
    if(y < 32)
    {
      SetRamAddr(x1/2, y);
    }
    else
    {
      SetRamAddr((x1/2)+8, y-32);
    }
    for (uint8_t x = x1; x < x2; ++x)
    {
      WriteRam(_screenBuffer[x][y]);
    }
  }
}

void LCD12864::ClearBit(const BitPos &x, uint8_t y)
{
  _screenBuffer[x.bytePos][y] &= ~BITMASK[x.bitPos];
}

void LCD12864::DrawBit(const BitPos &x, uint8_t y)
{
  _screenBuffer[x.bytePos][y] |= BITMASK[x.bitPos];
}

void LCD12864::ToggleBit(const BitPos &x, uint8_t y)
{
  _screenBuffer[x.bytePos][y] ^= BITMASK[x.bitPos];
}

void LCD12864::DrawSprite(uint8_t x, uint8_t y, const Sprite& sprite)
{
  uint8_t width = sprite.width;
  uint8_t height = sprite.height;
  for (uint8_t i = 0; i < width; ++i)
  {
    for (uint8_t j = 0; j < height; ++j)
    {
      _screenBuffer[x+i][y+j] = sprite.data[i+(j*width)];
    }
  }
}

void LCD12864::DrawAnimation(uint8_t x, uint8_t y, const Animation& animation, uint8_t frame)
{
  frame %= animation.frames;
  DrawSprite(x, y, animation.sprites[frame]);
}

void LCD12864::DrawText(uint8_t x, uint8_t y, const char* text)
{
  uint8_t posIndex = 0;
  uint8_t i = 0;
  while (text[i] != 0)
  {
    uint8_t inc = 1;
    char c = text[i];
    Sprite s;
    if (!CharToSprite(c, s))
    {
      // Euro
      if (c == -30 && text[i+1] == -126 && text[i+2] == -84)
      {
        s = Sprites::euro;
        inc = 3;
      }
      else if (c == -61)
      {
        if (text[i+1] == -124) { s = Sprites::AE; inc = 2; } // AE
        if (text[i+1] == -106) { s = Sprites::OE; inc = 2; } // OE
        if (text[i+1] == -100) { s = Sprites::UE; inc = 2; } // UE
        if (text[i+1] == -92) { s = Sprites::ae; inc = 2; } // ae
        if (text[i+1] == -74) { s = Sprites::oe; inc = 2; } // oe
        if (text[i+1] == -68) { s = Sprites::ue; inc = 2; } // ue
      }
    }
    DrawSprite(x+posIndex, y, s);
    i += inc;
    posIndex++;
  }
}

void LCD12864::DrawText(uint8_t x, uint8_t y, const String& text)
{
  DrawText(x, y, text.c_str());
}

void LCD12864::RenderMode()
{
  SetPins(0, 0, B00110110); // 8BIT Mode-4 ext gfx mode
}

void LCD12864::TextMode()
{
  SetPins(0, 0, B00110100); // Turn of gfx
  ClearScreen();
  SetPins(0, 0, B00110000); // Basic Instruction Set
  SetPins(0, 0, B00000110); // Entry Mode
}

void LCD12864::SetRamAddr(uint8_t x, uint8_t y)
{
  // Set Y Koordinate (0..31)
  SetPins(0, 0, B10000000 | y);
  // Set X Koordinate (0..15; 2 byte steps)
  SetPins(0, 0, B10000000 | x);
}

void LCD12864::WriteRam(uint8_t data)
{
  SetPins(1, 0, data);
}

void LCD12864::SetPins(
  uint8_t tRS, uint8_t tRW, uint8_t data)
{
  digitalWrite(_en_pin,1);

  DelayExecTime();

  digitalWrite(_rs_pin, tRS);
  digitalWrite(_rw_pin, tRW);
  digitalWrite(_d7_pin, data & BITMASK[0]);
  digitalWrite(_d6_pin, data & BITMASK[1]);
  digitalWrite(_d5_pin, data & BITMASK[2]);
  digitalWrite(_d4_pin, data & BITMASK[3]);
  digitalWrite(_d3_pin, data & BITMASK[4]);
  digitalWrite(_d2_pin, data & BITMASK[5]);
  digitalWrite(_d1_pin, data & BITMASK[6]);
  digitalWrite(_d0_pin, data & BITMASK[7]);

  DelayExecTime();

  digitalWrite(_en_pin, 0);

  DelayExecTime();
}

void LCD12864::DelayExecTime()
{
  delayMicroseconds(_delaytime);
}

bool LCD12864::CharToSprite(char c, Sprite& s)
{
  switch (c) {
    case 'A': s = Sprites::A; return true;
    case 'B': s = Sprites::B; return true;
    case 'C': s = Sprites::C; return true;
    case 'D': s = Sprites::D; return true;
    case 'E': s = Sprites::E; return true;
    case 'F': s = Sprites::F; return true;
    case 'G': s = Sprites::G; return true;
    case 'H': s = Sprites::H; return true;
    case 'I': s = Sprites::I; return true;
    case 'J': s = Sprites::J; return true;
    case 'K': s = Sprites::K; return true;
    case 'L': s = Sprites::L; return true;
    case 'M': s = Sprites::M; return true;
    case 'N': s = Sprites::N; return true;
    case 'O': s = Sprites::O; return true;
    case 'P': s = Sprites::P; return true;
    case 'Q': s = Sprites::Q; return true;
    case 'R': s = Sprites::R; return true;
    case 'S': s = Sprites::S; return true;
    case 'T': s = Sprites::T; return true;
    case 'U': s = Sprites::U; return true;
    case 'V': s = Sprites::V; return true;
    case 'W': s = Sprites::W; return true;
    case 'X': s = Sprites::X; return true;
    case 'Y': s = Sprites::Y; return true;
    case 'Z': s = Sprites::Z; return true;
    case 'a': s = Sprites::a; return true;
    case 'b': s = Sprites::b; return true;
    case 'c': s = Sprites::c; return true;
    case 'd': s = Sprites::d; return true;
    case 'e': s = Sprites::e; return true;
    case 'f': s = Sprites::f; return true;
    case 'g': s = Sprites::g; return true;
    case 'h': s = Sprites::h; return true;
    case 'i': s = Sprites::i; return true;
    case 'j': s = Sprites::j; return true;
    case 'k': s = Sprites::k; return true;
    case 'l': s = Sprites::l; return true;
    case 'm': s = Sprites::m; return true;
    case 'n': s = Sprites::n; return true;
    case 'o': s = Sprites::o; return true;
    case 'p': s = Sprites::p; return true;
    case 'q': s = Sprites::q; return true;
    case 'r': s = Sprites::r; return true;
    case 's': s = Sprites::s; return true;
    case 't': s = Sprites::t; return true;
    case 'u': s = Sprites::u; return true;
    case 'v': s = Sprites::v; return true;
    case 'w': s = Sprites::w; return true;
    case 'x': s = Sprites::x; return true;
    case 'y': s = Sprites::y; return true;
    case 'z': s = Sprites::z; return true;
    case '0': s = Sprites::num_0; return true;
    case '1': s = Sprites::num_1; return true;
    case '2': s = Sprites::num_2; return true;
    case '3': s = Sprites::num_3; return true;
    case '4': s = Sprites::num_4; return true;
    case '5': s = Sprites::num_5; return true;
    case '6': s = Sprites::num_6; return true;
    case '7': s = Sprites::num_7; return true;
    case '8': s = Sprites::num_8; return true;
    case '9': s = Sprites::num_9; return true;
    case ':': s = Sprites::colon; return true;
    case ',': s = Sprites::comma; return true;
    case '-': s = Sprites::hypen; return true;
    case ' ': s = Sprites::whitespace; return true;
    default: s = Sprites::error; return false;
  }
}

LCD12864 LCDA = LCD12864();
