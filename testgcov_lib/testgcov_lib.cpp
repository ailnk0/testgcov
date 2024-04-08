// testgcov_lib/testgcov_lib.cpp

#include "testgcov_lib.h"

int TestGcovLib::getSum(int a, int b) { return a + b; }

int TestGcovLib::getSub(int a, int b) { return a - b; }

int TestGcovLib::getSum2(int a, int b, int c) {
  return getSum(getSum(a, b), c);
}
