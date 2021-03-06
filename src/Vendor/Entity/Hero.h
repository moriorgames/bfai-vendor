#ifndef MORIOR_GAMES_VENDOR_ENTITY_HERO_H
#define MORIOR_GAMES_VENDOR_ENTITY_HERO_H

#include <string>

namespace MoriorGames {

class Hero
{
protected:
    int id = 0;
    std::string name = "", slug = "";
    int damage = 0, ranged = 0, health = 0, movement = 0, moveFrames = 0, attackFrames = 0;

public:
    int getId() const;
    void setId(int id);
    const std::string &getName() const;
    void setName(const std::string &name);
    const std::string &getSlug() const;
    void setSlug(const std::string &slug);
    int getDamage() const;
    void setDamage(int damage);
    int getRanged() const;
    void setRanged(int ranged);
    int getHealth() const;
    void setHealth(int health);
    int getMovement() const;
    void setMovement(int movement);
    int getMoveFrames() const;
    void setMoveFrames(int moveFrames);
    int getAttackFrames() const;
    void setAttackFrames(int attackFrames);

    void print();
};

}

#endif
