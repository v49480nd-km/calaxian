#include <cstdio>
#include <raylib.h>

#include "player.hpp"
#include "ui.hpp"

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "CALAXIAN");
    SetTargetFPS(FPS);
    Player player;

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            drawLives(player.lives);
            drawScore(player.score);

            if (IsKeyDown(KEY_A) && player.shipLeft.x >= 0) {
                player.vel = -10;
            } else if (IsKeyDown(KEY_D) && player.shipRight.x <= SCREEN_WIDTH) {
                player.vel = 10;
            } else if (IsKeyDown(KEY_SPACE)) {
                player.is_firing = true;
                player.fire();
                player.is_firing = false;
            } else {
                player.vel = 0;
            }

            player.drawPlayer();
            player.move();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
