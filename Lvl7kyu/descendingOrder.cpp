// Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.
// Examples:

// Input: 42145 Output: 54421

// Input: 145263 Output: 654321

// Input: 123456789 Output: 987654321
//my sol
#include <cinttypes>
using namespace std;

uint64_t descendingOrder(uint64_t a)
{
  string str = to_string(a);
  sort(str.begin(),str.end());
  reverse(str.begin(), str.end());
  cout << a << endl << str;
  return stoull(str);
}
//better sol
#include <cinttypes>
#include <string>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
  std::string s = std::to_string(a);
  std::sort(s.rbegin(), s.rend());
  return std::stoull(s);
}
