//Given an array of integers, return a new array with each value doubled.

// For example:
//
// [1, 2, 3] --> [2, 4, 6]


//my sol
#include <algorithm>
using namespace std;

std::vector<int> maps(const std::vector<int> & values) {
  vector<int> result = values;
  transform(begin(result), end(result),begin(result),[](int v){return v*2;});
  return result;
}
