//Kata: Create a method to see whether the string is ALL CAPS.

//my solution
#include <string>
using namespace std;
bool is_uppercase(const std::string &s) {
  for (auto& a : s)
    {
    if (a >= 97 && a <= 122 ) return false;
  }
  return true; // TODO
}

//clever solutions
//1
#include <string>
#include <algorithm>

bool is_uppercase(const std::string &s) {
  return std::none_of(s.begin(), s.end(), islower);
}
//2
#include <string>
#include <algorithm>

using namespace std;

bool is_uppercase(const string &s)
{
    string answer = s;
    transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
    return s == answer;
}
