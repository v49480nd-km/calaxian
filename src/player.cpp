#include <cmath>
#include <cstdlib>
#include <csignal>
#include <ctime>

#include "bullet.hpp"
#include "player.hpp"

Player::Player()
{
    this->is_firing = false;
    this->is_perced = false;
    this->is_super  = false;
    this->lives     = 3;
    this->perc_time = 0;
    this->score     = 0;
    this->xpos      = 100;
    this->xvel      = 0;
    this->ypos      = 100;
    this->yvel      = 0;
}

char Player::getKeys(void)
{
    // char key_pressed = getKey();
    // return key_pressed;
}

void Player::bulletCollide(Bullet& bullet)
{
    int dist = sqrt((pow((bullet.xpos - this->xpos), 2)) +
            (pow((bullet.ypos - this->xpos), 2)));

    if (dist <= 10)
        this->lives--;
}

void Player::drawPlayer(void)
{
    // draw(this->xpos, this->ypos);
    // refresh();
}

void Player::percCollide()
{
    // see bullet collide
    // might have to make a perc struct||class
}

void Player::saveHighScore()
{
    FILE* score_file;
    int high_score;

    score_file = fopen("highscore.txt", "r");

    if (score_file == NULL)
        exit(0);

    high_schore = fscanf(score_file, "%d", &high_score); 

    if (this->score > high_score)
    {
        freopen(score_file, "w");
        fprintf("%d", this->score);
    }

    fclose(score_file);
}

void Player::_fire(void)
{
    if (this->is_firing)
        this->is_firing = false;

    if (!(this->is_firing))
    {
        Bullet bullet = { PLAYER, this->xpos, this->ypos, 5, };
    }
}

void Player::_move(void)
{
    this->xpos += this->xvel;
    this->ypos += this->yvel;
}
