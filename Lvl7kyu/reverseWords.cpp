// Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.
// Examples

// "This is an example!" ==> "sihT si na !elpmaxe"
// "double  spaces"      ==> "elbuod  secaps"

// my sol
#include <algorithm>
using namespace std;
std::string reverse_words(std::string str)
{
  unsigned int pos = 0;
  for (unsigned int i = 0; i < str.size(); i++)
    {
    if (str[i] == ' ')
      {
      reverse(pos,i);
      pos = i+1;
    } else if (i == str.size() -1) reverse(pos,i+1);
  }
  return str;
}


