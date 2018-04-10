#ifndef ANIMATIONS_H
#define ANIMATIONS_H

#include "Structs.h"
#include "Sprites.h"

namespace Animations
{
  static const Sprite plug_data[] =
  {
    Sprites::plug_1,
    Sprites::plug_2
  };

  static const Animation plug = { 2, plug_data };

  static const Sprite bottle_data[] =
  {
    Sprites::bottle_1,
    Sprites::bottle_2,
    Sprites::bottle_3,
    Sprites::bottle_4,
    Sprites::bottle_5,
    Sprites::bottle_6,
    Sprites::bottle_7,
    Sprites::bottle_8,
    Sprites::bottle_9,
    Sprites::bottle_10
  };

  static const Animation bottle = { 10, bottle_data };
}

#endif //  ANIMATIONS_H
