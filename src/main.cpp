#include <raylib.h>
#include <iostream>
#include "constants.h"
#include "game.h"

using namespace Constants;

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Breakout");
    SetTargetFPS(TARGET_FPS);

    Breakout game = Breakout();
    game.Initialise();

    while (!WindowShouldClose())
    {    
        BeginDrawing();        
        ClearBackground(DARKGREEN);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}