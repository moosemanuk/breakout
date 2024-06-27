#include "game.h"
#include <iostream>

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
            
            Vector2 loc = {ball.GetX(), ball.GetY()};
            Rectangle rec = {(float)j*BLOCK_WIDTH + 1, (float)i*BLOCK_HEIGHT, 
                             (float)BLOCK_WIDTH, (float)BLOCK_HEIGHT};
            
            if(CheckCollisionCircleRec(loc, BALL_RADIUS, rec)){

                if(grid.grid[i][j] >= 0){
                    if(ball.GetY() - BALL_RADIUS == rec.y + rec.height || ball.GetY() + BALL_RADIUS == rec.y){
                        ball.ChangeYDirection();
                    }
                    else{
                        ball.ChangeXDirection();                        
                    }
                    grid.grid[i][j] = -1;                    
                }
            }    
        }
    }
}
