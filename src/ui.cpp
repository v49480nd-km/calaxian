#include "ui.hpp"

void drawLives(int cur_lives) {
    const char lives[8] = {
        'L', 'i', 'v', 'e', 's', ':', ' ',
        (char)(cur_lives + 48)
    };
    const int FONT_SIZE = 36;
    const int FONT_SPACE = 3;
    Font font = LoadFont(FONT);
    Vector2 size = MeasureTextEx(font, lives, FONT_SIZE, FONT_SPACE);
    Vector2 pos = { 50, size.y };
    DrawTextEx(font, lives, pos, FONT_SIZE, FONT_SPACE, BLACK);
}

void drawScore(int cur_score) {
    const char score[8] = {
        'S', 'c', 'o', 'r', 'e', ':', ' ',
        (char)(cur_score + 48)
    };
    const int FONT_SIZE = 36;
    const int FONT_SPACE = 3;
    Font font = LoadFont(FONT);
    Vector2 size = MeasureTextEx(font, score, FONT_SIZE, FONT_SPACE);
    Vector2 pos = { (SCREEN_WIDTH - 50) - size.x, size.y };
    DrawTextEx(font, score, pos, FONT_SIZE, FONT_SPACE, BLACK);
}
