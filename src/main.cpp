#include <raylib.h>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Breakout");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(DARKGREEN);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}