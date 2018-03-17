#ifndef MORIOR_GAMES_VENDOR_ENTITY_BATTLE_HERO_H
#define MORIOR_GAMES_VENDOR_ENTITY_BATTLE_HERO_H

#include <string>
#include "Hero.h"

namespace MoriorGames {

class BattleHero: public Hero
{
public:
    static const std::string SIDE_PLAYER;
    static const std::string SIDE_ENEMY;

private:
    std::string side = SIDE_PLAYER;
    int injury = 0;
    bool alive = true;

public:
    const std::string &getSide() const;
    void setSide(const std::string &side);

    void addInjury(int injury);

    void print();
};

}

#endif
