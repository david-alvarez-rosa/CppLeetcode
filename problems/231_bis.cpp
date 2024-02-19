#include "bits/stdc++.h"
#include <gtest/gtest.h>
using namespace std;

class Solution {
public:
  bool isPowerOfTwo(int n) { return n >= 1 && !(n & (n - 1)); }
};

TEST(SolutionTest, Test1) {
  Solution solution;
  EXPECT_TRUE(solution.isPowerOfTwo(1));
}

TEST(SolutionTest, Test2) {
  Solution solution;
  EXPECT_TRUE(solution.isPowerOfTwo(16));
}

TEST(SolutionTest, Test3) {
  Solution solution;
  EXPECT_FALSE(solution.isPowerOfTwo(3));
}
