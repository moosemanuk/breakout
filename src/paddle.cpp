#include "paddle.h"

Paddle::Paddle()
{
    this->speed = PADDLE_SPEED;
    this->colour = PADDLE_COLOUR;
}

void Paddle::Draw(int position){
    DrawRectangle(position, PADDLE_Y, PADDLE_WIDTH, PADDLE_HEIGHT, WHITE);
}

void Paddle::ProcessEvents()
{
    if(IsKeyDown(KEY_D)){
        this->position += PADDLE_SPEED;
    }
    else if(IsKeyDown(KEY_A)){
        this->position -= PADDLE_SPEED;
    }
}
