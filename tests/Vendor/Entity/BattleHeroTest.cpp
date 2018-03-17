
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Entity/BattleHero.h"

using MoriorGames::BattleHero;

BOOST_AUTO_TEST_CASE(test_getters_and_setters_battle_hero_entity)
{
    std::string side = BattleHero::SIDE_ENEMY;

    auto entity = new BattleHero;
    entity->setSide(side);

    BOOST_CHECK(entity->getSide() == side);
}
