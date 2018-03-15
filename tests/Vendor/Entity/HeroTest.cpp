
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Entity/Hero.h"

using MoriorGames::Hero;

BOOST_AUTO_TEST_CASE(test_getters_and_setters_hero_entity)
{
    int id = 1;
    std::string name = "I am Drogo", slug = "i-am-drogo", side = Hero::SIDE_ENEMY;
    int damage = 1, ranged = 5, health = 2, movement = 3, moveFrames = 4, attackFrames = 5;

    auto hero = new Hero;
    hero->setId(id);
    hero->setName(name);
    hero->setSlug(slug);
    hero->setSide(side);
    hero->setDamage(damage);
    hero->setRanged(ranged);
    hero->setHealth(health);
    hero->setMovement(movement);
    hero->setMoveFrames(moveFrames);
    hero->setAttackFrames(attackFrames);

    BOOST_CHECK(hero->getId() == id);
    BOOST_CHECK(hero->getName() == name);
    BOOST_CHECK(hero->getSlug() == slug);
    BOOST_CHECK(hero->getSide() == side);
    BOOST_CHECK(hero->getDamage() == damage);
    BOOST_CHECK(hero->getRanged() == ranged);
    BOOST_CHECK(hero->getHealth() == health);
    BOOST_CHECK(hero->getInjury() == 0);
    BOOST_CHECK(hero->getMovement() == movement);
    BOOST_CHECK(hero->getMoveFrames() == moveFrames);
    BOOST_CHECK(hero->getAttackFrames() == attackFrames);
}
