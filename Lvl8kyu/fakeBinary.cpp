
// Given a string of digits, you should replace any
//digit below 5 with '0' and any digit 5 and above with '1'.
//Return the resulting string.
//
// Note: input will never be an empty string

//This question is a good practice for creating an array mask.

//my solution
#include <string>
using namespace std;
std::string fakeBin(std::string str){
  //your code here
  for (auto& c : str)
    {
    if (c < 53) c = 48;
    else c = 49;
  }
  return str;
}
//clever solution
#include <string>
#include <algorithm>

std::string fakeBin(std::string str){
  std::transform(str.cbegin(), str.cend(), str.begin(), [](auto const & c){
    return c >= '5' ? '1' : '0';
  });
  return str;
}
