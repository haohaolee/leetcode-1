#include <vector>

#include <gtest/gtest.h>

#include "math.h"

namespace {
using namespace std;

using namespace leetcode::math;

TEST(RectangleOverlapTest, Case1) {
  RectangleOverlap solution;
  vector<int> rec1 = { 0, 0, 2, 2 };
  vector<int> rec2 = { 1, 1, 3, 3 };

  EXPECT_TRUE(solution.IsOverlap(rec1, rec2));
};

TEST(RectangleOverlapTest, Case2) {
  RectangleOverlap solution;
  vector<int> rec1 = { 0, 0, 1, 1 };
  vector<int> rec2 = { 1, 0, 2, 1 };

  EXPECT_FALSE(solution.IsOverlap(rec1, rec2));
};

}  // namespace