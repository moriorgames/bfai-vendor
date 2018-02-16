
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Grid/Grid.h"

using MoriorGames::Grid;

BOOST_AUTO_TEST_CASE(test_grid_get_factor)
{
    auto obj = new Grid;

    BOOST_CHECK(obj->getFactor() == 0);
}

BOOST_AUTO_TEST_CASE(test_grid_can_create_grid_coordinates)
{
    auto obj = new Grid;

    BOOST_CHECK(obj->getCoordinates().size() == 119);
}

BOOST_AUTO_TEST_CASE(test_grid_can_print_all_coordinates)
{
    auto obj = new Grid;
    obj->printCoordinates();
}
