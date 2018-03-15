
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Parsers/HeroParser.h"

#include <fstream>
#include <iostream>

using MoriorGames::HeroParser;

BOOST_AUTO_TEST_CASE(test_is_able_to_parse_json_with_heroes_data)
{
    std::string file = "tests/fixtures/heroes.json";
    std::ifstream fin(file.c_str());
    std::stringstream buffer;
    buffer << fin.rdbuf();
    std::string json = buffer.str();

    auto obj = new HeroParser(json);
    for (auto item:obj->parse()) {
        if (item->getId() == 1) {
            BOOST_CHECK(item->getSlug() == "paul");
        }
    }
}
