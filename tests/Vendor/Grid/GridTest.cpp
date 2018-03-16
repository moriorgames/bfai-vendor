
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Grid/Grid.h"

using MoriorGames::Grid;

BOOST_AUTO_TEST_CASE(test_grid_get_factor)
{
    auto obj = new Grid;

    BOOST_CHECK_EQUAL(obj->getFactor(), 0);
}

BOOST_AUTO_TEST_CASE(test_grid_can_create_grid_coordinates)
{
    auto obj = new Grid;

    BOOST_CHECK_EQUAL(obj->createGridCoordinates().size(), 119);
}

BOOST_AUTO_TEST_CASE(test_grid_can_print_all_coordinates)
{
    auto obj = new Grid;
    obj->printCoordinates();
}

BOOST_AUTO_TEST_CASE(test_find_valid_coordinate_in_grid)
{
    auto obj = new Grid;
    obj->createGridCoordinates();
    auto coordinate = obj->findByXY(-1, 1);

    BOOST_CHECK_EQUAL(coordinate->x, -1);
    BOOST_CHECK_EQUAL(coordinate->y, 1);
}

BOOST_AUTO_TEST_CASE(test_find_not_valid_coordinate_in_grid)
{
    auto obj = new Grid;
    auto coordinate = obj->findByXY(99, -99);

    BOOST_CHECK_EQUAL(coordinate, nullptr);
}
