#include "HeroRepository.h"

using MoriorGames::HeroRepository;
using MoriorGames::Hero;

HeroRepository::HeroRepository(HeroParser *heroParser)
{
    for (auto hero:heroParser->parse()) {
        heroes.push_back(hero);
    }
}

Hero *HeroRepository::findById(int id)
{
    for (auto hero:heroes) {
        if (hero->getId() == id) {
            return hero;
        }
    }

    return nullptr;
}
