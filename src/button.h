#pragma once

#include<raylib.h>

class Button{
private:
    Rectangle rect;
    Color color;
    const char* text;
    bool isHovered;
public:
    Button(float x, float y, float width, float height, Color color, const char* text);
    void Draw();
    bool IsMouseOver();
};