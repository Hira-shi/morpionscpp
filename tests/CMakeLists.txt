add_executable(Morpions_tests
    boardTest.cpp
    ruleTest.cpp
    gameTest.cpp
    playerTest.cpp
)

target_link_libraries(Morpions_tests
    PRIVATE
    MorpionsLib
    GTest::gtest_main
    GTest::gmock_main
)

include(GoogleTest)
gtest_discover_tests(Morpions_tests)
