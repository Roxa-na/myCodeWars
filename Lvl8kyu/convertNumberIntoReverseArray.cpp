// Convert number to reversed array of digits

// Given a random non-negative number, you have to return the digits of this number within an array in reverse order.
// Example(Input => Output):

// 35231 => [1,3,2,5,3]
// 0 => [0]

//my solution
#include <string>
#include <algorithm>
using namespace std;
std::vector<int> digitize(unsigned long n) 
{  
  vector<int> result;
  string sNumber = to_string(n);
  reverse(sNumber.begin(),sNumber.end());
  for (auto& a : sNumber) result.push_back(a - 48);
  return result;
}
