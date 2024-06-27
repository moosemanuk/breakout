#include "ball.h"

using namespace Constants;

Ball::Ball()
{
    this->radius = BALL_RADIUS;
    this->colour = WHITE;
    this->x_speed = BALL_SPEED;
    this->y_speed = BALL_SPEED;
    this->x = SCREEN_WIDTH / 2;
    this->y = SCREEN_HEIGHT / 2;
}

void Ball::Draw()
{
    DrawCircle(x, y, BALL_RADIUS, WHITE);
}

void Ball::Update()
{
    x += x_speed;
    y += y_speed;

    if(y + BALL_RADIUS >= SCREEN_HEIGHT || y - BALL_RADIUS <= 0){
        ChangeYDirection();
    }

     if(x + BALL_RADIUS >= SCREEN_WIDTH || x - BALL_RADIUS <= 0){
        ChangeXDirection();
    }
}

float Ball::GetX()
{
    return x;
}

float Ball::GetY()
{
    return y;
}

float Ball::GetRadius()
{
    return radius;
}

void Ball::ChangeXDirection()
{
    x_speed *= -1;
}

void Ball::ChangeYDirection()
{
    y_speed *= -1;
}
