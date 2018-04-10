#ifndef LCD12864_h
#define LCD12864_h

#include <Arduino.h>

#include "Structs.h"

class LCD12864 {
 public:
  LCD12864();

  void Initialise(uint8_t RS, uint8_t RW, uint8_t EN, uint8_t D0,
    uint8_t D1, uint8_t D2, uint8_t D3, uint8_t D4, uint8_t D5,
    uint8_t D6, uint8_t D7, uint8_t CSEL1);

  // Clears screen and screenbuffer
  void Clear();
  // Only clears screen
  void ClearScreen();
  // Only clears screenbuffer
  void ClearScreenBuffer();
  void ClearScreenBuffer(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2);

  void RenderScreenBuffer();
  void RenderScreenBuffer(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2);

  /**
   * For ...Bit functions:
   * 0 <= x < 128
   * 0 <= y <  64
   *
   * Usage for (17,11):
   * ClearBit({17}, 11); // x coordinate as bit number
   * ClearBit({2,1}, 11); // x coordinate as byte, bit combination
   */
  void ClearBit(const BitPos &x, uint8_t y);
  void DrawBit(const BitPos &x, uint8_t y);
  void ToggleBit(const BitPos &x, uint8_t y);

  /**
   * For ...Byte functions:
   * 0 <= x < 16
   * 0 <= y < 64
   */
  void DrawSprite(uint8_t x, uint8_t y, const Sprite& sprite);
  void DrawAnimation(uint8_t x, uint8_t y, const Animation& animation, uint8_t frame);
  void DrawText(uint8_t x, uint8_t y, const char* text);
  void DrawText(uint8_t x, uint8_t y, const String& text);

  void RenderMode();
  void TextMode();

 private:
  static const uint8_t DEFAULTTIME;
  static const uint8_t BITMASK[8];

  uint8_t _delaytime;
  uint8_t _screenBuffer[16][64];
  uint8_t _rs_pin;
  uint8_t _rw_pin;
  uint8_t _en_pin;
  uint8_t _d0_pin;
  uint8_t _d1_pin;
  uint8_t _d2_pin;
  uint8_t _d3_pin;
  uint8_t _d4_pin;
  uint8_t _d5_pin;
  uint8_t _d6_pin;
  uint8_t _d7_pin;
  uint8_t _csel1_pin; // PSB

  void DelayExecTime();
  void SetPins(uint8_t tRS, uint8_t tRW, uint8_t data);
  void WriteRam(uint8_t data);
  void SetRamAddr(uint8_t x, uint8_t y);
  bool CharToSprite(char c, Sprite& s);

};
extern LCD12864 LCDA;
#endif
