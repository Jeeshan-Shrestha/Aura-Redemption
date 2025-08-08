#include <raylib.h>

int main()
{
    const Color darkGreen = {20, 160, 133, 255};

    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Aura Redemption");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
    }

    CloseWindow();
}