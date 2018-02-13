
add_library(
        bfai_vendor
        Vendor/Entity/Hero.cpp
        Vendor/Grid/Coordinate.cpp
        Vendor/Grid/Grid.cpp
)

target_link_libraries(bfai_vendor)
