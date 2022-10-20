// Complete the solution so that it reverses the string passed into it.
//
// 'world'  =>  'dlrow'
// 'word'   =>  'drow'
//

//my solution
#include <string>
using namespace std ;

string reverseString (string str )
{
  // your Code is Here ... enjoy !!!
  string result = "";
  for (int i = str.size()-1; i>=0; i--)
    result.push_back(str[i]);
  return result;

}

//better solutions
//1
#include <algorithm>
#include <string>

std::string reverseString(const std::string& str) {
  return std::string(str.rbegin(), str.rend());
}
//2
#include <algorithm>
#include <string>

std::string reverseString(std::string str) {
  std::reverse(str.begin(), str.end());
  return str;
}
