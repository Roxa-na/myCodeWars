#include <vector>
#include <bitset>
using namespace std;
std::vector<int> showBits(int n){
  vector<int> result;
  bitset<32> binary_number(n);
  for (int i = binary_number.size()-1; i >=0 ; i--){
    result.push_back(binary_number[i]);
  }
  return result;
}