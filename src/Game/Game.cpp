#include "Game.h"
#include "../ball/ball.h"
#include "../Button/Button.h"
#include<raylib.h>


Button *button1 = nullptr; 
Button *button2 = nullptr; 
Game::Game() : isRunning(true)
{
    BgColor = BLACK;
}

Game::~Game()
{
}

void Game::Init(const char* title)
{   
    // int monitor = GetCurrentMonitor();
    // int width = GetMonitorWidth(monitor);
    // int height = GetMonitorHeight(monitor);
    windowHeight = 1080;
    windowWidth = 1960;
    InitWindow(windowWidth-50, windowHeight-50, title); // Initialize the window with the monitor's width and height

    SetTargetFPS(60); // Set the game to run at 60 frames per second
    ClearBackground(BgColor);
    isRunning = true;
    button1 = new Button(windowWidth/2-250/2,windowHeight/2.0-100/2,250,100,GREEN,"START");
    button2 = new Button(400,200,250,100,BLUE,"QUIT");
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
    
}

void Game::Render()
{
    BeginDrawing();
    ClearBackground(BgColor);
    button1->Draw();
    button2->Draw();
    EndDrawing();
}

void Game::Cleanup()
{
    CloseWindow();
}
