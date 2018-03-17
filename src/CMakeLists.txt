
add_library(
        bfai_vendor
        Vendor/Entity/BattleHero.cpp
        Vendor/Entity/Hero.cpp
        Vendor/Grid/Grid.cpp
        Vendor/Parsers/HeroParser.cpp
        Vendor/Parsers/JsonParser.cpp
        Vendor/Services/PathFinder.cpp
        Vendor/ValueObjects/Coordinate.cpp
)

target_link_libraries(bfai_vendor)
