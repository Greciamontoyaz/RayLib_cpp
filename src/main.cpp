#include <raylib.h>
#include "ball.h"

int main()
{
    Color darkGreen = Color{20, 120, 133, 255};

    const int screenWidth = 800;
    const int screenHeight = 600;

    Ball ball = Ball();
    Ball ball_1 = Ball();
    ball_1.x=100;
    ball_1.color=BLUE;
   



    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkGreen);
        ball.Update();
        ball_1.Update();
        ball.Draw();
        ball_1.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}