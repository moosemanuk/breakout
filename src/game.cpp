#include "game.h"

Breakout::Breakout()
{

}

void Breakout::Initialise()
{
    this->background = LoadTexture("res\\background.png"); 
    this->ball = Ball();
    this->paddle = Paddle();
}

void Breakout::Draw()
{
    DrawTexture(background, 0, 0, WHITE);  
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
}
