#include "Game.h"

Game::Game() : isRunning(true)
{
}

Game::~Game()
{
}

void Game::Init(const char* title,int width, int height,Color bgColor)
{
    InitWindow(width, height, title);
    SetTargetFPS(60); // Set the game to run at 60 frames per second
    ClearBackground(bgColor);
    isRunning = true;
    BgColor = bgColor;
}

void Game::HandleInput()
{
    if(WindowShouldClose())
    {
        isRunning = false; // Stop the game loop if the window should close
    }
}

void Game::Update()
{
    // Update code here
}

void Game::Render()
{
    BeginDrawing();
    ClearBackground(BgColor);
    DrawCircle(400, 300, 50, RED);
    EndDrawing();
}

void Game::Cleanup()
{
    CloseWindow();
}