#ifndef MORIOR_GAMES_REPOSITORY_HERO_REPOSITORY_H
#define MORIOR_GAMES_REPOSITORY_HERO_REPOSITORY_H

#include <vector>
#include "../Parsers/HeroParser.h"

namespace MoriorGames {

class HeroRepository
{
public:
    explicit HeroRepository(const std::string &json);
    Hero *findById(int id);

private:
    std::vector<Hero *> heroes;
};

}

#endif
