#include <raylib.h>
#include "Player/Player.h"
#include <string>

using namespace std;

#define SCREEN_WIDTH 1400
#define SCREEN_HEIGHT 1000

#define GROUND_X 0
#define GROUND_Y 800

void drawArena(Texture2D ground)
{

    DrawTextureEx(ground, {GROUND_X, GROUND_Y}, 0, 1, RAYWHITE);
}

void fullScreen()
{
    if (IsKeyDown(KEY_F11))
    {
        ToggleFullscreen();
    }
}

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Aura Redemption");
    SetTargetFPS(60);

    // textures
    Texture2D ground = LoadTexture("C:/Users/NITRO/Desktop/RayLibGames/Aura-Redemption v1/src/Images/ground.png");
    Texture2D sjwSprite = LoadTexture("C:/Users/NITRO/Desktop/RayLibGames/Aura-Redemption v1/src/Images/sjw.jpg");

    ground.width += 1000;
    ground.height += 50;

    Player sjw("Sung Jin Woo", 100, 10, 2, {100, 680}, sjwSprite);

    while (!WindowShouldClose())
    {
        fullScreen();
        BeginDrawing();
        ClearBackground(WHITE);
        drawArena(ground);
        sjw.Draw();
        EndDrawing();
    }

    CloseWindow();
}
