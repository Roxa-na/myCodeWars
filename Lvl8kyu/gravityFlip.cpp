// There are some columns of toy cubes in the box arranged in a line. The i-th column contains a_i cubes. 
// At first, the gravity in the box is pulling the cubes downwards. When Bob switches the gravity, 
// it begins to pull all the cubes to a certain side of the box, d, which can be either 'L' or 'R' (left or right).
//  'R', [3, 2, 1, 2]      ->  [1, 2, 2, 3]
// * 'L', [1, 4, 5, 3, 5 ]  ->  [5, 5, 4, 3, 1]


#include <vector>
#include <algorithm>
using namespace std;
std::vector<int> flip(const char dir, const std::vector<int>& arr) {
  vector<int> temp = arr;
  sort(temp.begin(), temp.end());
  if (dir == 'L') reverse(temp.begin(), temp.end());
    return temp;
}