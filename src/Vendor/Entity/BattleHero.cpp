#include "BattleHero.h"

using MoriorGames::BattleHero;

const std::string BattleHero::SIDE_PLAYER = "side-player";

const std::string BattleHero::SIDE_ENEMY = "side-enemy";

const std::string &BattleHero::getSide() const
{
    return side;
}

void BattleHero::setSide(const std::string &side)
{
    this->side = side;
}

void BattleHero::addInjury(int injury)
{
    this->injury += injury;
}

void BattleHero::print()
{

}
