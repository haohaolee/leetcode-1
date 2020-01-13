#include <cmath>

#include "math.h"

namespace leetcode {
namespace math {

int RectangleArea::Compute(
        int a, int b, int c, int d,
        int e, int f, int g, int h) {

    int overlap = 0;
    if ((c - a) + (g - e) > std::abs(g - a)
        && (d - b) + (h - f) > std::abs(d - f)) {
        overlap = std::abs(c - e) * std::abs(b - h);
    }

    return (c - a) * (d - b) + (g - e) * (h - f) - overlap;
}

}  // namespace math
}  // namespace leetcode


