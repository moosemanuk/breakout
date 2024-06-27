#pragma once
#include <raylib.h>
#include "constants.h"

class Ball{
    private:
        int x;
        int y;
        float radius;
        int x_speed;
        int y_speed;
        Color colour;

    public:
        Ball();
        void Draw();
        void Update();
        float GetX();
        float GetY();
        float GetRadius();
        void ChangeXDirection();
        void ChangeYDirection();
};