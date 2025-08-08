#include "Game.h"
Game *game = nullptr;



int main()
{
    game = new Game();
    game->Init("My Game");

    while (game->running())
    {
        game->HandleInput();
        game->Update();
        game->Render();
    }

    game->Cleanup();
    delete game;
    return 0;
}