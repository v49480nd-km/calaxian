#include <cstdio>

#include "raylib.h"

#define FONT "../data/fonts/Warzone.ttf"
#define FPS 60
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "CALAXIAN");
    SetTargetFPS(FPS);
    Font warzone = LoadFont(FONT);
    Vector2 fontPosition = { 0, 0 };
    Vector2 triOne = {
        (SCREEN_WIDTH / 2), (SCREEN_HEIGHT / 3)
    };
    Vector2 triTwo = {
        (SCREEN_WIDTH / 3), (SCREEN_HEIGHT - (SCREEN_HEIGHT / 3))
    };
    Vector2 triThree = {
        (SCREEN_WIDTH - (SCREEN_WIDTH / 3)),
        (SCREEN_HEIGHT - (SCREEN_HEIGHT / 3))
    };

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTextEx(warzone, "Calaxian", fontPosition, 42, 2, BLACK);
            DrawTriangle(triOne, triTwo, triThree, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
