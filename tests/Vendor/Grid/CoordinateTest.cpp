
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Grid/Coordinate.h"

using MoriorGames::Coordinate;

BOOST_AUTO_TEST_CASE(test_coordinate_can_be_initialized)
{
    int x = 10, y = 20;

    auto obj = new Coordinate(x, y);

    BOOST_CHECK(obj->x == x);
    BOOST_CHECK(obj->y == y);
}

BOOST_AUTO_TEST_CASE(test_coordinate_moved_constructor)
{
    int x = 10, y = 20;
    auto copy = new Coordinate(x, y);

    auto obj = new Coordinate(copy);

    BOOST_CHECK(obj->x == copy->x);
    BOOST_CHECK(obj->y == copy->y);
}
