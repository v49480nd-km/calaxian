#ifndef __BULLET_HPP__
#define __BULLET_HPP__

enum BulletType
{
    ENEMY,
    PLAYER,
};

typedef struct
{
    BulletType type;
    int xpos,
        ypos,
        yvel;
} Bullet;

#endif
