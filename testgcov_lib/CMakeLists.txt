# testgcov_lib/CMakeLists.txt

option(ENABLE_COVERAGE "Enable code coverage" ON)

add_library(testgcov_lib
  STATIC
    testgcov_lib.h
    testgcov_lib.cpp
)
target_include_directories(testgcov_lib
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

if(ENABLE_COVERAGE)
  message(STATUS "Code coverage enabled")

  if(NOT CMAKE_BUILD_TYPE STREQUAL "Debug")
    message(WARNING "Code coverage results with an optimized (non-Debug) build may be misleading")
  endif()

  if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    message(STATUS "GNU gcov enabled")
    target_compile_options(testgcov_lib
      PRIVATE
        --coverage
    )
    target_link_libraries(testgcov_lib
      PRIVATE
        gcov
    )
  else()
    message(FATAL_ERROR "Code coverage is not supported for the current compiler")
  endif()
endif()
