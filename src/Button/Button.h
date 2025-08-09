#pragma once

#include<raylib.h>
struct ButtonTxt{
    int X,Y;
};
class Button{
private:
    Rectangle rect;
    Color color;
    const char* text;
    const int fontSize = 50;
    ButtonTxt textparam;
    bool isHovered;
public:
    Button(float x, float y, float width, float height, Color color, const char* text);
    void Draw();
};