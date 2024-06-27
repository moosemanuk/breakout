#pragma once
#include <raylib.h>
#include "constants.h"

class Ball{
    private:
        int x;
        int y;
        int radius;
        Color colour;

    public:
        Ball();
        void Draw();
        void Update();
};