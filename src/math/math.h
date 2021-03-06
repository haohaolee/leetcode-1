#ifndef LEETCODE_MATH_H_
#define LEETCODE_MATH_H_

#include <vector>

namespace leetcode {
namespace math {

/*
 *
 * [223] Rectangle Area
 *
 * https://leetcode.com/problems/rectangle-area/description/
 *
 * algorithms
 * Medium (36.80%)
 * Likes:    320
 * Dislikes: 604
 * Total Accepted:    97.7K
 * Total Submissions: 264.9K
 * Testcase Example:  '-3\n0\n3\n4\n0\n-1\n9\n2'
 *
 * Find the total area covered by two rectilinear rectangles in a 2D plane.
 * 
 * Each rectangle is defined by its bottom left corner and top right corner as
 * shown in the figure.
 * 
 * 
 * 
 * Example:
 * 
 * 
 * Input: A = -3, B = 0, C = 3, D = 4, E = 0, F = -1, G = 9, H = 2
 * Output: 45
 * 
 * Note:
 * 
 * Assume that the total area is never beyond the maximum possible value of
 * int.
 *
*/
class RectangleArea {
public:
  int Compute(int A, int B, int C, int D, int E, int F, int G, int H);
};

/*
 *
 * [836] Rectangle Overlap
 *
 * https://leetcode.com/problems/rectangle-overlap/description/
 *
 * algorithms
 * Easy (48.21%)
 * Likes:    487
 * Dislikes: 92
 * Total Accepted:    37.8K
 * Total Submissions: 78.5K
 * Testcase Example:  '[0,0,2,2]\n[1,1,3,3]'
 *
 * A rectangle is represented as a list [x1, y1, x2, y2], where (x1, y1) are
 * the coordinates of its bottom-left corner, and (x2, y2) are the coordinates
 * of its top-right corner.
 * 
 * Two rectangles overlap if the area of their intersection is positive.  To be
 * clear, two rectangles that only touch at the corner or edges do not
 * overlap.
 * 
 * Given two (axis-aligned) rectangles, return whether they overlap.
 * 
 * Example 1:
 * 
 * 
 * Input: rec1 = [0,0,2,2], rec2 = [1,1,3,3]
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: rec1 = [0,0,1,1], rec2 = [1,0,2,1]
 * Output: false
 * 
 * 
 * Notes:
 * 
 * 
 * Both rectangles rec1 and rec2 are lists of 4 integers.
 * All coordinates in rectangles will be between -10^9 and 10^9.
 *
 *
*/
class RectangleOverlap {
public:
  bool IsOverlap(std::vector<int>& rec1, std::vector<int>& rec2);
};

}  // namespace array
}  // namespace leetcode

#endif  // LEETCODE_MATH_H_
