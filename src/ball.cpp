#include "ball.h"

using namespace Constants;

Ball::Ball()
{
    this->radius = BALL_RADIUS;
    this->colour = WHITE;
}

void Ball::Draw()
{
    DrawCircle(x, y, BALL_RADIUS, WHITE);
}

void Ball::Update()
{
    x += BALL_SPEED;
    y += BALL_SPEED;
}
