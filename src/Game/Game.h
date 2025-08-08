#ifndef GAME_H
#define GAME_H

#include<raylib.h>

class Game
{
    private:
        bool isRunning;
        Color BgColor;
        int windowWidth;
        int windowHeight;


    public:
    Game();
    ~Game();
    void Init(const char* title);
    void HandleInput();
    void Update();
    void Render();
    void Cleanup();
    bool running(){return isRunning;}
};

#endif