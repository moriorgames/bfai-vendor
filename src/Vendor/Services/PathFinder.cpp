#include "PathFinder.h"

using MoriorGames::PathFinder;

PathFinder::PathFinder(int move, std::vector<Coordinate *> coordinates)
    : move{move}, coordinates{coordinates}
{
}
