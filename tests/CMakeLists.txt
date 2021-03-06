find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories(
        ${TEST_SOURCE_DIR}/src
        ${Boost_INCLUDE_DIRS}
)

add_executable(
        testsuite
        test.cpp
        Vendor/Entity/HeroTest.cpp
        Vendor/Factories/BattleFactoryTest.cpp
        Vendor/Grid/GridTest.cpp
        Vendor/Parsers/BattleParserTest.cpp
        Vendor/Parsers/HeroParserTest.cpp
        Vendor/Repository/HeroRepositoryTest.cpp
        Vendor/Services/PathFinderTest.cpp
        Vendor/ValueObjects/CoordinateTest.cpp
        Vendor/Entity/BattleHeroTest.cpp
)

target_link_libraries(
        testsuite
        bfai_vendor
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)

FIND_PROGRAM(GCOV_PATH gcov)
FIND_PROGRAM(LCOV_PATH lcov)
FIND_PROGRAM(GENHTML_PATH genhtml)
FIND_PROGRAM(GCOVR_PATH gcovr PATHS ${CMAKE_SOURCE_DIR}/tests)
