
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Entity/Hero.h"

using MoriorGames::Hero;

BOOST_AUTO_TEST_CASE(test_getters_and_setters_hero_entity)
{
    int id = 1;
    std::string name = "I am Drogo", slug = "i-am-drogo";
    int damage = 1, ranged = 5, health = 2, movement = 3, moveFrames = 4, attackFrames = 5;

    auto entity = new Hero;
    entity->setId(id);
    entity->setName(name);
    entity->setSlug(slug);
    entity->setDamage(damage);
    entity->setRanged(ranged);
    entity->setHealth(health);
    entity->setMovement(movement);
    entity->setMoveFrames(moveFrames);
    entity->setAttackFrames(attackFrames);

    BOOST_CHECK(entity->getId() == id);
    BOOST_CHECK(entity->getName() == name);
    BOOST_CHECK(entity->getSlug() == slug);
    BOOST_CHECK(entity->getDamage() == damage);
    BOOST_CHECK(entity->getRanged() == ranged);
    BOOST_CHECK(entity->getHealth() == health);
    BOOST_CHECK(entity->getMovement() == movement);
    BOOST_CHECK(entity->getMoveFrames() == moveFrames);
    BOOST_CHECK(entity->getAttackFrames() == attackFrames);
}

BOOST_AUTO_TEST_CASE(test_print_hero_entity)
{
    int id = 1;
    std::string name = "I am Drogo", slug = "i-am-drogo";
    int damage = 1, ranged = 5, health = 2, movement = 3, moveFrames = 4, attackFrames = 5;

    auto entity = new Hero;
    entity->setId(id);
    entity->setName(name);
    entity->setSlug(slug);
    entity->setDamage(damage);
    entity->setRanged(ranged);
    entity->setHealth(health);
    entity->setMovement(movement);
    entity->setMoveFrames(moveFrames);
    entity->setAttackFrames(attackFrames);

    entity->print();
}