#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <csignal>
#include <ctime>

#include "bullet.hpp"
#include "player.hpp"
#include "ui.hpp"

Player::Player() {
    this->is_firing = false;
    this->lives     = 3;
    this->score     = 0;
    this->shipHead  = { SCREEN_WIDTH / 2, SCREEN_HEIGHT - 84 };
    this->shipLeft  = { (SCREEN_WIDTH / 2) - 25, SCREEN_HEIGHT - 48 };
    this->shipRight = { (SCREEN_WIDTH / 2) + 25, SCREEN_HEIGHT - 48 };
}

void Player::drawPlayer() {
    DrawTriangle(this->shipHead, this->shipLeft, this->shipRight, PLAYER_COLOR);
}

void Player::move() {
    this->shipHead.x += vel;
    this->shipLeft.x += vel;
    this->shipRight.x += vel;
}
