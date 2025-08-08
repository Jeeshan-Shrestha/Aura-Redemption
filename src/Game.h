#ifndef GAME_H
#define GAME_H

#include<raylib.h>

class Game
{
    private:
        bool isRunning;
        Color BgColor;


    public:
    Game();
    ~Game();
    void Init(const char* title,int width, int height,Color bgColor);
    void HandleInput();
    void Update();
    void Render();
    void Cleanup();
    bool running(){return isRunning;}
};

#endif