#include <raylib.h>
class Ball
{
    private:
        int xpos, ypos;
        int radius;
        Color color;
    public:
        Ball(int xpos,int ypos,int radius, Color);
        void update();
        void draw();
};