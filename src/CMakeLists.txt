
add_library(
        bfai_vendor
        Vendor/Entity/Hero.cpp
        Vendor/Grid/Grid.cpp
        Vendor/Services/PathFinder.cpp
        Vendor/ValueObjects/Coordinate.cpp
)

target_link_libraries(bfai_vendor)
