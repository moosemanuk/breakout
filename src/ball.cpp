#include "ball.h"

using namespace Constants;

Ball::Ball()
{
    this->radius = BALL_RADIUS;
    this->colour = WHITE;
    this->x_speed = BALL_SPEED;
    this->y_speed = BALL_SPEED;
}

void Ball::Draw()
{
    DrawCircle(x, y, BALL_RADIUS, WHITE);
}

void Ball::Update()
{
    x += x_speed;
    y += y_speed;
}
