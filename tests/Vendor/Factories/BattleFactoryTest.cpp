
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Factories/BattleFactory.h"

#include <fstream>
#include <iostream>

using MoriorGames::BattleFactory;
using MoriorGames::HeroRepository;

BOOST_AUTO_TEST_CASE(test_is_able_build_battle_with_battle_factory)
{
    std::string fileRepo = "tests/fixtures/heroes.json";
    std::ifstream finRepo(fileRepo.c_str());
    std::stringstream bufferRepo;
    bufferRepo << finRepo.rdbuf();
    std::string jsonRepo = bufferRepo.str();
    auto repo = new HeroRepository(jsonRepo);

    std::string file = "tests/fixtures/battle.json";
    std::ifstream fin(file.c_str());
    std::stringstream buffer;
    buffer << fin.rdbuf();
    std::string json = buffer.str();
    auto battle = (new BattleFactory)->execute(json, repo);

    battle->print();
//
//    auto obj = new BattleParser(json);
//    for (auto item:obj->parse()->getHeroes()) {
//        if (item->getBattleHeroId() == 1) {
//            BOOST_CHECK_EQUAL(item->getSide(), BattleHero::SIDE_PLAYER);
//            BOOST_CHECK_EQUAL(item->getCoordinate()->x, -7);
//            BOOST_CHECK_EQUAL(item->getCoordinate()->y, 2);
//        }
//    }
}
