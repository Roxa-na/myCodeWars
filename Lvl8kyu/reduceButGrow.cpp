// Given a non-empty array of integers, return the result of multiplying the values together in order. Example:
//
// [1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
// my solution
#include <vector>
int grow(std::vector<int> nums) {
  // your code here
  int product = 1;
  for (auto& n : nums)
    product = product * n;
  return product;
}
// better solution
#include <vector>
#include <numeric>
#include <functional>

int grow(const std::vector<int>& nums) {
  return std::accumulate(nums.cbegin(), nums.cend(), 1, std::multiplies<int>());
}
