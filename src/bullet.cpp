#include <raylib.h>

#include "bullet.hpp"

Bullet::Bullet(int xp, int yp, BulletType bt) {
    this->xpos = xp;
    this->ypos = yp;
    this->type = bt;

    if (bt) {
        yvel = -10;
    } else {
        yvel = 10;
    }
}

void Bullet::drawBullet() {
    DrawCircle(10, 10, 20, ORANGE);
}
