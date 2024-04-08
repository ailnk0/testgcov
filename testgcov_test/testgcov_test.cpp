// testgcov_test/testgcov_test.cpp
#include <gtest/gtest.h>

#include "testgcov_lib.h"

TEST(testgcov_test, getSum2) {
  // given
  int a = 1;
  int b = 2;
  int c = 3;

  // when
  auto result = TestGcovLib().getSum2(a, b, c);

  // then
  EXPECT_EQ(6, result);
}
