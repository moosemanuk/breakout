#pragma once
#include <raylib.h>

namespace Constants {

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    const int TARGET_FPS = 60;

    const int PADDLE_WIDTH = 100;
    const int PADDLE_HEIGHT = 20;
    const int PADDLE_SPEED = 5;
    const int PADDLE_Y = SCREEN_HEIGHT - SCREEN_HEIGHT/10;
    const Color PADDLE_COLOUR = WHITE;

    const float BALL_RADIUS = 10;
    const int BALL_SPEED = 10;

    const int GRID_ROWS = 8;
    const int GRID_COLUMNS = 10;
    const int GRID_OFFSET = 15;

    const int BLOCK_WIDTH = 80;
    const int BLOCK_HEIGHT = 30;

}