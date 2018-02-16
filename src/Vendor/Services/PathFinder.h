#ifndef MORIOR_GAMES_VENDOR_SERVICES_PATH_FINDER_H
#define MORIOR_GAMES_VENDOR_SERVICES_PATH_FINDER_H

#include <vector>
#include "../ValueObjects/Coordinate.h"

namespace MoriorGames {

class PathFinder
{
public:
    PathFinder(int move, std::vector<Coordinate *> coordinates);

private:
    int move;
    std::vector<Coordinate *> coordinates;
};

}

#endif
