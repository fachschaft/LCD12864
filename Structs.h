#ifndef	STRUCTS_H
#define STRUCTS_H

struct BitPos
{
  BitPos(uint8_t pos)
  {
    bytePos = pos >> 3;
    bitPos = pos & B00000111;
  }
  BitPos(uint8_t bytePos, uint8_t bitPos)
    : bytePos(bytePos), bitPos(bitPos)
  { }
  uint8_t bytePos;
  uint8_t bitPos;
};

struct Sprite
{
  uint8_t width;
  uint8_t height;
  const uint8_t* data;
};

struct Animation
{
  uint8_t frames;
  const Sprite* sprites;
};

#endif //  STRUCTS_H
