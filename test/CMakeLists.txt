enable_testing()

add_executable(
    test
    test.cpp
    test2.cpp    
)
target_link_libraries(
    test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test)