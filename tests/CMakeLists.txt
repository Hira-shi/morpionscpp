add_executable(Morpions_tests
        boardTest.cpp
        ruleTest.cpp
        gameTest.cpp
        playerTest.cpp
)

target_link_libraries(Morpions_tests
        GTest::gtest_main
        GTest::gmock_main
)

include(GoogleTest)
gtest_discover_tests(Morpions_tests)

target_include_directories(Morpions_tests PRIVATE
        ${gtest_SOURCE_DIR}/include
        ${gmock_SOURCE_DIR}/include
        ${CMAKE_BINARY_DIR}/_deps/googletest-src/googletest/include
)