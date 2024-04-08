# testgcov_test/CMakeLists.txt

add_executable(testgcov_test
    testgcov_test.cpp
)
target_link_libraries(testgcov_test
    GTest::gtest_main
    testgcov_lib
)
include(GoogleTest)
gtest_discover_tests(testgcov_test)
