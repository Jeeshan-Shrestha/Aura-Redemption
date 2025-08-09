#include "Button.h"

Button::Button(float x, float y, float width, float height, Color color, const char* text)
{
    rect = {x,y,width,height};
    this->color = color;
    this->text = text;
    int textWidth = MeasureText(text,fontSize);
    int textHeight = fontSize;
    int textX = rect.x + (rect.width - textWidth)/2.0;
    int textY = rect.y + (rect.height - textHeight)/2.0;

    textparam = {textX,textY};

}

void Button::Draw()
{
    if(CheckCollisionPointRec(GetMousePosition(),rect))
    {   
        DrawRectangle(rect.x - 5,rect.y -5,rect.width +10,rect.height + 10,WHITE);
        DrawRectangleRec(rect, GRAY);
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        {
         DrawRectangle(rect.x - 5,rect.y -5,rect.width +10,rect.height + 10,WHITE);
        DrawRectangleRec(rect, DARKGRAY);           
        }
    }
    else{
        DrawRectangleRec(rect,color);
    }
    DrawText(text,textparam.X,textparam.Y,fontSize,WHITE);

}
