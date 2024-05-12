#include <cstdio>

#include <raylib.h>

int main(void)
{
    const int WIDTH = 800;
    const int HEIGHT = 600;

    InitWindow(WIDTH, HEIGHT, "CALAXIAN");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("CALAXIAN", 190, 200, 84, BLACK);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
