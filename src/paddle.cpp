#include "paddle.h"

Paddle::Paddle()
{
    this->speed = PADDLE_SPEED;
    this->colour = PADDLE_COLOUR;
    this->position = (SCREEN_WIDTH / 2) - (PADDLE_WIDTH / 2);
}

void Paddle::Draw(){
    DrawRectangle(position, PADDLE_Y, PADDLE_WIDTH, PADDLE_HEIGHT, WHITE);
}

void Paddle::MoveLeft()
{
    this->position -= PADDLE_SPEED;
}

void Paddle::MoveRight()
{
    this->position += PADDLE_SPEED;
}

