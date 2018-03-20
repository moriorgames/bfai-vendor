#ifndef MORIOR_GAMES_FACTORIES_BATTLE_FACTORY_H
#define MORIOR_GAMES_FACTORIES_BATTLE_FACTORY_H

#include <string>
#include "../Entity/Battle.h"

namespace MoriorGames {

class BattleFactory
{
public:
    Battle *execute(std::string json);
};

}

#endif
