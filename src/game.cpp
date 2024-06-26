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
}
