#include "ball.h"

Ball::Ball(int xpos, int ypos, int radius, Color color)
    : xpos(xpos), ypos(ypos), radius(radius), color(color)
{
}

void Ball::update()
{
    if (IsKeyDown(KEY_RIGHT)) xpos += 5;
    if (IsKeyDown(KEY_LEFT)) xpos -= 5; 
    if (IsKeyDown(KEY_UP)) ypos -= 5;
    if (IsKeyDown(KEY_DOWN)) ypos += 5;
}

void Ball::draw()
{
    DrawCircle(xpos, ypos, radius, color);
}
