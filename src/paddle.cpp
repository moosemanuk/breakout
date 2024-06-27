#include "paddle.h"

Paddle::Paddle()
{
    this->speed = PADDLE_SPEED;
    this->colour = PADDLE_COLOUR;
    this->position = (SCREEN_WIDTH / 2) - (PADDLE_WIDTH / 2);
}

void Paddle::Draw(){
    //DrawRectangle(position, PADDLE_Y, PADDLE_WIDTH, PADDLE_HEIGHT, WHITE);
    Rectangle rec;
    rec.height = PADDLE_HEIGHT;
    rec.width = PADDLE_WIDTH;
    rec.x = position;
    rec.y = PADDLE_Y;

    DrawRectangleRounded(rec, 1, 1, WHITE);   
}

void Paddle::MoveLeft()
{
    this->position -= PADDLE_SPEED;
}

void Paddle::MoveRight()
{
    this->position += PADDLE_SPEED;
}

float Paddle::GetPosition()
{
    return position;
}
