#ifndef __UI_HPP__
#define __UI_HPP__

#include <raylib.h>

#define FONT "../data/fonts/Warzone.ttf"
#define FPS 60
#define PLAYER_COLOR ORANGE
#define SCREEN_WIDTH GetScreenWidth()
#define SCREEN_HEIGHT GetScreenHeight()

void drawLives(int cur_lives);

#endif
