// "Point reflection" or "point symmetry" is a basic concept in geometry where a given point, P,
// at a given position relative to a mid-point, Q has a corresponding point, P1, which is the
// same distance from Q but in the opposite direction.
// Task

// Given two points P and Q, output the symmetric point of point P about Q. Each argument is
// a two-element array of integers representing the point's X and Y coordinates. Output should
// be in the same format, giving the X and Y coordinates of point P1. You do not have to validate the input.

// my sol
#include <utility>

std::pair<int, int> symmetricPoint(const std::pair<int, int>& p,
                                   const std::pair<int, int>& q) {
  int first = 0;
  int second = 0;
  if ((q.first < 0 && p.first >0) or (p.first < 0 && q.first > 0)) first = 2 *q.first - p.first;
  else  first = 2 *q.first - p.first;
  if ((q.second < 0 && p.second >0) or (p.second < 0 && q.second > 0)) second = 2 *q.second - p.second;
  else second = 2 *q.second -p.second;
    return {first,second};
}



