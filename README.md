# LCD12864

Simple and straight forward LCD12864 driver with sprite and animation support

## Example

```cpp
void setup()
{
  // Init empty display
  LCDA.Initialise(14, 15, 16, 17, 18, 19, 20, 21, 8, 9, 10, 11);
  LCDA.Clear();
  LCDA.RenderMode();
  LCDA.RenderScreenBuffer();

  // Draw Hello World and tft logo
  LCDA.DrawText(0, 3, "Hello World");
  LCDA.DrawSprite(14, 48, Sprites::ftf_logo);
  LCDA.RenderScreenBuffer();
}

void animation(uint8_t frame) {
  LCDA.DrawAnimation(0, 51, Animations::plug, frame);
  LCDA.RenderScreenBuffer(0, 51, 2, 64);
}

void loop()
{
  while(true)
  {
    animation(0);
    delay(500);
    animation(1);
    delay(500);
  }
}
```