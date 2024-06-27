#pragma once
#include <raylib.h>
#include <iostream>
#include <vector>
#include "constants.h"
#include "colours.h"

using namespace Constants;

class Grid{
    private:
        int rows;
        int columns; 
        int width;
        int height;
        std::vector<Color> colours;
    public:
        Grid();
        void Initialise();
        void PrintToConsole();
        void Draw();
        int grid[GRID_ROWS][GRID_COLUMNS];
};