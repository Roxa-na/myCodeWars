// Given an array of integers your solution should find the smallest integer.
//
// For example:
//
//     Given [34, 15, 88, 2] your solution will return 2

//my solution

#include <vector>

using namespace std;

int findSmallest(vector <int> list)
{
   // Your Code is Here ... Hope you Enjoy
  int min = list[0];
  for ( auto& l : list)
    {
    if (min > l) min = l;
  }
  return min;
}

//better solutions
//1
#include <algorithm>
#include <vector>

int findSmallest(const std::vector<int>& xs) {
  return *std::min_element(xs.cbegin(), xs.cend());
}

//2
#include <vector>
#include <algorithm>
using namespace std;

int findSmallest(vector <int> list)
{
  sort(list.begin() , list.end());
  return list[0];
  }
