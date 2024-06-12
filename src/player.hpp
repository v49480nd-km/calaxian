#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <raylib.h>

class Player {
public:
    // VARS
    bool is_firing,
         is_perced,
         is_super;
    int lives, score, vel;
    Vector2 shipHead, shipLeft, shipRight;
    // FUNCTIONS
    Player();
    void drawPlayer(void);
    void move(void);

private:
    void _fire(void);
    void _setPerc(void);
    void _setSuper(void);
    void _setVel(void);
};

#endif
