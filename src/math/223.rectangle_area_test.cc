#include <vector>

#include <gtest/gtest.h>

#include "math.h"

namespace {

using namespace leetcode::math;

TEST(RectangleAreaTest, Case1) {
  RectangleArea solution;

  EXPECT_EQ(solution.Compute(-3,0,3,4,0,-1,9,2), 45);
};

}  // namespace

