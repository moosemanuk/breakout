#pragma once
#include <raylib.h>
#include "constants.h"

using namespace Constants;

class Paddle{
    private:
        float position;
        int speed;
        Color colour;        

    public:
        Paddle();
        void Draw();
        void MoveLeft();
        void MoveRight();       
        float GetPosition();

};