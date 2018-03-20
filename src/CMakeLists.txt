
add_library(
        bfai_vendor
        Vendor/Entity/Battle.cpp
        Vendor/Entity/BattleHero.cpp
        Vendor/Entity/Hero.cpp
        Vendor/Factories/BattleFactory.cpp
        Vendor/Grid/Grid.cpp
        Vendor/Parsers/BattleParser.cpp
        Vendor/Parsers/HeroParser.cpp
        Vendor/Parsers/JsonParser.cpp
        Vendor/Repository/HeroRepository.cpp
        Vendor/Services/PathFinder.cpp
        Vendor/ValueObjects/Coordinate.cpp
)

target_link_libraries(bfai_vendor)
