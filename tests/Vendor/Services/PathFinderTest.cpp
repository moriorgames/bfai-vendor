
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Grid/Grid.h"
#include "../../../src/Vendor/Services/PathFinder.h"

using MoriorGames::Grid;
using MoriorGames::PathFinder;

BOOST_AUTO_TEST_CASE(test_path_finder_constructor)
{
    auto grid = new Grid;
    auto coordinates = grid->getCoordinates();
    new PathFinder(3, coordinates);
}
