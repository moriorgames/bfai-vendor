
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Entity/Hero.h"

using MoriorGames::Hero;

BOOST_AUTO_TEST_CASE(test_getters_and_setters_hero_entity)
{
    int id = 1;
    std::string name = "I am Drogo", slug = "i-am-drogo";

    auto hero = new Hero;
    hero->setId(id);
    hero->setName(name);
    hero->setSlug(slug);

    BOOST_CHECK(hero->getId() == id);
    BOOST_CHECK(hero->getName() == name);
    BOOST_CHECK(hero->getSlug() == slug);
}
