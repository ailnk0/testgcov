cmake_minimum_required(VERSION 3.13)

project(testgcov)

enable_testing()

add_subdirectory(third-party)
add_subdirectory(testgcov_lib)
add_subdirectory(testgcov_test)
