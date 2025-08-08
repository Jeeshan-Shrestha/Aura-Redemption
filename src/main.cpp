#include <raylib.h>
#include "Player.h"
#include <string>

using namespace std;

int main()
{

    constexpr int screenWidth = 1000;
    constexpr int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Aura Redemption");
    SetTargetFPS(60);

    Texture2D sjwSprite = LoadTexture("C:/Users/NITRO/Desktop/RayLibGames/Aura-Redemption v1/src/Images/sjw.jpg");

    Player sjw("Sung Jin Woo", 100, 10, 2, {200, 200}, sjwSprite);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        sjw.Draw();
        EndDrawing();
    }

    CloseWindow();
}