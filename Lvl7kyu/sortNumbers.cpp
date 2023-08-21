#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> nums) {
  if (nums.size() > 0) sort(nums.begin(),nums.end());
  return nums;
}