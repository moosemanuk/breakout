#pragma once
#include <raylib.h>
#include "paddle.h"
#include "ball.h"
#include "grid.h"
#include "constants.h"

class Breakout{
    private:
        Paddle paddle;
        Ball ball;
        Texture2D background;

    public:
        Breakout();
        void Initialise();
        void Draw();
        void HandleInput();
        void CheckCollision();
        Grid grid;

};