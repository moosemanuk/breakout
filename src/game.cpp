#include "game.h"

Breakout::Breakout()
{
    this->background = LoadTexture("res\\background.png"); 
    this->ball = Ball();
    this->paddle = Paddle();
    this->grid = Grid();
}

void Breakout::Initialise()
{
    grid.Initialise();    
}

void Breakout::Draw()
{
    DrawTexture(background, 0, 0, WHITE); 
    grid.Draw(); 
    paddle.Draw();
    ball.Update();
    ball.Draw();
    CheckCollision();
}

void Breakout::HandleInput()
{
    if(IsKeyDown(KEY_A)){
        paddle.MoveLeft();
    }
    if(IsKeyDown(KEY_D)){
        paddle.MoveRight(); 
    }
}

void Breakout::CheckCollision()
{
    if(CheckCollisionCircleRec(Vector2{ball.GetX(), ball.GetY()}, ball.GetRadius(), 
                                       Rectangle{paddle.GetPosition(), PADDLE_Y, PADDLE_WIDTH, PADDLE_HEIGHT})){
                                            ball.ChangeYDirection();          
                                       }
    for(int i = 0; i < GRID_ROWS; i++){
        for(int j = 0; j < GRID_COLUMNS; j++){
            if(CheckCollisionCircleRec(Vector2{ball.GetX(), ball.GetY()}, ball.GetRadius(), 
                                       Rectangle{(float)j*BLOCK_WIDTH + 1, 
                                                 (float)i*BLOCK_HEIGHT + 1, 
                                                 (float)BLOCK_WIDTH, 
                                                 (float)BLOCK_HEIGHT})){
                                                    if(grid.grid[i][j] != 0){
                                                        ball.ChangeYDirection();
                                                        grid.grid[i][j] = 0;
                                                    }
                                       }    
        }
    }
}
