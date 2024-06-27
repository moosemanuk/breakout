#pragma once
#include <raylib.h>
#include "constants.h"

class Ball{
    private:
        int x;
        int y;
        int radius;
        int x_speed;
        int y_speed;
        Color colour;

    public:
        Ball();
        void Draw();
        void Update();
};