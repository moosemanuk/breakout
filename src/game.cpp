#include "game.h"

Breakout::Breakout()
{

}

void Breakout::Initialise()
{
    this->background = LoadTexture("res\\background.png"); 
}

void Breakout::Draw()
{
    DrawTexture(background, 0, 0, WHITE);  
    paddle.Draw();
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
