#pragma once
#include <raylib.h>
#include "constants.h"

using namespace Constants;

class Paddle{
    private:
        int position;
        int speed;
        Color colour;        

    public:
        Paddle();
        void Draw(int position);
        void ProcessEvents();

};