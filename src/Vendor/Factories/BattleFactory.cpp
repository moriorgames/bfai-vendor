#include "BattleFactory.h"
#include "../Parsers/BattleParser.h"

using MoriorGames::BattleFactory;
using MoriorGames::Battle;

Battle *BattleFactory::execute(std::string json)
{
    auto battleParser = new BattleParser(json);

    return battleParser->parse();
}
