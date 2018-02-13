
#include <boost/test/unit_test.hpp>
#include "../../../src/Vendor/Grid/Grid.h"

using MoriorGames::Grid;

BOOST_AUTO_TEST_CASE(test_grid_get_factor)
{
    auto obj = new Grid;

    BOOST_CHECK(obj->getFactor() == 0);
}
