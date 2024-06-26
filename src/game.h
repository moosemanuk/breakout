#pragma once
#include <raylib.h>
#include "paddle.h"
#include "constants.h"

class Breakout{
    private:
        Paddle paddle;
        Texture2D background;

    public:
        Breakout();
        void Initialise();
        void Draw();

};