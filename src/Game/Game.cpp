#include "Game.h"
#include "../ball/ball.h"
Ball *ball = new Ball(0,0,20,RED);



Game::Game() : isRunning(true)
{
    BgColor = BLACK;
}

Game::~Game()
{
}

void Game::Init(const char* title)
{   
    int monitor = GetCurrentMonitor();
    int width = GetMonitorWidth(monitor);
    int height = GetMonitorHeight(monitor);
    windowHeight = height;
    windowWidth = width;
    SetConfigFlags(FLAG_FULLSCREEN_MODE);
    InitWindow(width, height, title); // Initialize the window with the monitor's width and height

    SetTargetFPS(GetMonitorRefreshRate(monitor)); // Set the game to run at 60 frames per second
    ClearBackground(BgColor);
    isRunning = true;
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
    ball->update(); // Update the ball's position based on input
}

void Game::Render()
{
    BeginDrawing();
    ClearBackground(BgColor);
    ball->draw(); // Draw the ball
    EndDrawing();
}

void Game::Cleanup()
{
    CloseWindow();
}