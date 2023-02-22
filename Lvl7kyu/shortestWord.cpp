// Simple, given a string of words, return the length of the shortest word(s).

// String will never be empty and you do not need to account for different data types.
//my Solution

#include <string>
using namespace std;
int find_short(string str)
{
 int min = str.substr(0,str.find (' ')).length();
  int pos = 0;
  for (unsigned int i = 0; i < str.size(); i++)
    {
    if (str[i] == ' ')
      {
      if (i - pos <= min) min = i - pos;
      pos = i+1;
    }else if (i == str.size() -1) {
      if (i - pos + 1 <= min) min = i - pos + 1;
    }
  }
  return min;
}
//other sol
int find_short(const std::string &str)
{
    std::istringstream inp(str);
    std::string s;
    int len = -1;
    while (std::getline(inp, s, ' '))
        if (s.length() < len)
            len = s.length();
    return len;
}