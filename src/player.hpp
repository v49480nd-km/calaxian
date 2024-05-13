#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <cstdbool>

class Player {
public:
    // VARS
    bool is_firing,
         is_perced,
         is_super;
    int lives,
        perc_time,
        score,
        xpos,
        xvel,
        ypos,
        yvel;
    // FUNCTIONS
    Player();
    ~Player();

    char getKeys(void);
    void bulletCollide(Bullet* bullet);
    void drawPlayer(void);
    void percCollide(void);
    void saveHighScore(void);
private:
    void _fire(void);
    void _move(void);
    void _setPerc(void);
    void _setSuper(void);
    void _setVel(void);
};

#endif
