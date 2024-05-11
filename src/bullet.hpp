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
