// Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).
//
// Examples:
//
// solution('abc', 'bc') // returns true
// solution('abc', 'd') // returns false
//
#include <string>
using namespace std;
bool solution(std::string const &str, std::string const &ending) {
  int endingSize = ending.size();
  int strSize = str.size();
  if (endingSize > strSize)
  // in case the ending is bigger , it returns false
    {
    return false;
  }else
    { // 
   string strCompare = str.substr(abs(strSize - endingSize ),endingSize);
    return (strCompare == ending);
  }
}
