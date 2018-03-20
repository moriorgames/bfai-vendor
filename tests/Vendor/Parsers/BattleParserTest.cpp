
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Parsers/BattleParser.h"

#include <fstream>
#include <iostream>

using MoriorGames::BattleParser;
using MoriorGames::BattleHero;

BOOST_AUTO_TEST_CASE(test_is_able_to_parse_json_with_battle_data)
{
    std::string file = "tests/fixtures/battle.json";
    std::ifstream fin(file.c_str());
    std::stringstream buffer;
    buffer << fin.rdbuf();
    std::string json = buffer.str();

    auto obj = new BattleParser(json);
    for (auto item:obj->parse()->getHeroes()) {
        if (item->getBattleHeroId() == 1) {
            BOOST_CHECK_EQUAL(item->getSide(), BattleHero::SIDE_PLAYER);
            BOOST_CHECK_EQUAL(item->getCoordinate()->x, -7);
            BOOST_CHECK_EQUAL(item->getCoordinate()->y, 2);
        }
    }
}
