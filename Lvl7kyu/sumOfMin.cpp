#include <vector>

using namespace std;
int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
  vector<vector<int>> temp = numbers;
  int sum = 0;
  for (auto& a : temp){
    sort(a.begin(), a.end());
  }
  for (int i = 0; i < temp.size(); i++){
    sum = temp[i][0] + sum;
  }
    return sum;
}
// another sol
#include <numeric>

int sum_of_minimums(std::vector<std::vector<int>> &n) {
    return std::accumulate(n.begin(), n.end(), 0, [](auto r, auto e){ return r + *std::min_element(e.begin(), e.end()); });
}