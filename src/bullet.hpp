#ifndef __BULLET_HPP__
#define __BULLET_HPP__

enum BulletType {
    ENEMY,
    PLAYER,
};

class Bullet {
public:
    BulletType type;
    int xpos, ypos, yvel;

    Bullet(int xp, int yp, BulletType bt);
    void drawBullet(void);
};

#endif
