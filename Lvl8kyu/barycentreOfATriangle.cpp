// The medians of a triangle are the segments that unit the vertices with the midpoint of their opposite sides. The three medians of a triangle intersect at the same point, called the barycenter or the centroid. Given a triangle, defined by the cartesian coordinates of its vertices we need to localize its barycenter or centroid.

// The function bar_triang() or barTriang or bar-triang, receives the coordinates of the three vertices A, B and C as three different arguments and outputs the coordinates of the barycenter O in an array [xO, yO]

// This is how our asked function should work: the result of the coordinates should be expressed up to four decimals, (rounded result).

// Let's see some cases:

// bar_triang([4, 6], [12, 4], [10, 10]) ------> [8.6667, 6.6667]

// bar_triang([4, 2], [12, 2], [6, 10] ------> [7.3333, 4.6667]
#include <utility>
#include <cmath>
using point = const std::pair<double, double>;
std::pair<double, double> barTriang(point p1, point p2, point p3) {
  //your code here
  double first = round(((p1.first + p2.first + p3.first)/3) * 10000)/10000;
  double second = round(((p1.second + p2.second + p3.second)/3)*10000)/10000;
  return {first, second};
}