
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Repository/HeroRepository.h"

#include <fstream>
#include <iostream>

using MoriorGames::HeroRepository;

BOOST_AUTO_TEST_CASE(test_is_able_to_find_hero_with_repository_by_id)
{
    std::string file = "tests/fixtures/heroes.json";
    std::ifstream fin(file.c_str());
    std::stringstream buffer;
    buffer << fin.rdbuf();
    std::string json = buffer.str();
    auto repo = new HeroRepository(json);
    auto hero = repo->findById(1);

    BOOST_CHECK_EQUAL(hero->getSlug(), "jaimie");
}
