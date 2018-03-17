
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Entity/BattleHero.h"
#include "../../../src/Vendor/ValueObjects/Coordinate.h"

using MoriorGames::BattleHero;
using MoriorGames::Coordinate;

BOOST_AUTO_TEST_CASE(test_getters_and_setters_battle_hero_entity)
{
    std::string side = BattleHero::SIDE_ENEMY;

    auto entity = new BattleHero;
    entity->setSide(side);

    BOOST_CHECK(entity->getSide() == side);
    BOOST_CHECK_EQUAL(entity->getCoordinate()->x, 0);
    BOOST_CHECK_EQUAL(entity->getCoordinate()->y, 0);
}

BOOST_AUTO_TEST_CASE(test_battle_hero_can_receive_injuries)
{
    int health = 10, injury = 3;

    auto entity = new BattleHero;
    entity->setHealth(health);
    entity->addInjury(injury);

    BOOST_CHECK_EQUAL(entity->getCurrentHealth(), health - injury);
}

BOOST_AUTO_TEST_CASE(test_battle_hero_cannot_receive_more_injuries_than_healt)
{
    int health = 10, injury = 12;

    auto entity = new BattleHero;
    entity->setHealth(health);
    entity->addInjury(injury);

    BOOST_CHECK_EQUAL(entity->getCurrentHealth(), 0);
}

BOOST_AUTO_TEST_CASE(test_battle_hero_can_die)
{
    int health = 10, injury = 10;

    auto entity = new BattleHero;
    entity->setHealth(health);
    entity->addInjury(injury);

    BOOST_CHECK_EQUAL(entity->isDead(), true);
}

BOOST_AUTO_TEST_CASE(test_battle_hero_can_change_coordinates)
{
    auto coord1 = new Coordinate(1, 1);

    auto entity = new BattleHero;
    entity->setCoordinate(coord1);

    BOOST_CHECK_EQUAL(entity->getCoordinate()->x, coord1->x);
    BOOST_CHECK_EQUAL(entity->getCoordinate()->y, coord1->y);

    auto coord2 = new Coordinate(-1, -1);
    entity->setCoordinate(coord2);

    BOOST_CHECK_EQUAL(entity->getCoordinate()->x, coord2->x);
    BOOST_CHECK_EQUAL(entity->getCoordinate()->y, coord2->y);
}

BOOST_AUTO_TEST_CASE(test_print_battle_hero_entity)
{
    int health = 10, injury = 1;
    auto coord = new Coordinate(3, 4);

    auto entity = new BattleHero;
    entity->setHealth(health);
    entity->addInjury(injury);
    entity->setCoordinate(coord);

    entity->print();
}
