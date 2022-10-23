// Your task is to sum the differences between consecutive
// pairs in the array in descending order.
// Example
//
// [2, 1, 10]  -->  9

//my solution
#include <algorithm>
#include <vector>
using namespace std;
int sumOfDifferences(const std::vector<int>& arr){
  //your code here
  vector<int> temp = arr;
  if (arr.size() == 1 or arr.size() == 0) return 0;
  else
    {
    sort(temp.begin(),temp.end());
    reverse(temp.begin(), temp.end());
    int sum = 0;
    for (unsigned long i = 0; i <= arr.size() - 2; i++)
    {
    sum = sum + (temp[i] - temp[i+1]);
  }
    return sum;
  }

}
//the most clever solution
#include <vector>
#include <algorithm>
int sumOfDifferences(const std::vector<int>& arr) {
  if (arr.empty()) return 0;
  auto p = std::minmax_element(arr.cbegin(), arr.cend());// return minimum and maximum within a range
  return *p.second - *p.first;
}

//another good solution
#include <vector>
#include <algorithm>
#include <numeric>

int sumOfDifferences(std::vector<int> arr){
  if(arr.size() <= 1) { return 0; }

  std::sort(arr.begin(), arr.end());
  std::adjacent_difference(arr.begin(), arr.end(), arr.begin());

  // front() is not an adjacent difference
  return std::accumulate(std::next(arr.begin(), 1), arr.end(), 0);
}
