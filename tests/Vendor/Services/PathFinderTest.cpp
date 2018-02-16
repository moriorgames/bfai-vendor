
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Grid/Grid.h"
#include "../../../src/Vendor/Services/PathFinder.h"

using MoriorGames::Grid;
using MoriorGames::PathFinder;
using MoriorGames::Coordinate;

BOOST_AUTO_TEST_CASE(test_path_finder_constructor)
{
    new PathFinder(3, new Coordinate(0, 0), new Grid);
}

BOOST_AUTO_TEST_CASE(test_find_short_path_in_1_movement)
{
    auto obj = new PathFinder(1, new Coordinate(0, 0), new Grid);
    auto target = new Coordinate(0, 1);

//    BOOST_CHECK(obj->find(target).size() == 1);
}

//BOOST_AUTO_TEST_CASE(test_find_short_path_in_3_movements)
//{
//    auto grid = new Grid;
//    auto coordinates = grid->getCoordinates();
//    auto obj = new PathFinder(3, new Coordinate(0, 0), coordinates);
//    auto target = new Coordinate(1, 2);
//
//    BOOST_REQUIRE(obj->find(target).size() == 3);
//}
