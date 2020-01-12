#include <vector>

#include "math.h"

namespace leetcode {
namespace math {

using namespace std;

bool RectangleOverlap::IsOverlap(std::vector<int>& rec1, std::vector<int>& rec2) {
  if (rec1.size() != 4 || rec2.size() != 4) return false;

  bool x_overlap = rec1[0] < rec2[2] && rec2[0] < rec1[2];
  bool y_overlap = rec1[1] < rec2[3] && rec2[1] < rec1[3];

  return x_overlap && y_overlap;
}

}  // namespace math
}  // namespace leetcode
