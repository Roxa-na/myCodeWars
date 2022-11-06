// Write a function that checks if a given string (case insensitive) is a palindrome.

//my solution

#include <algorithm>
#include <string>
using namespace std;
bool isPalindrom (string str)
{
  string str1 = string(str.rbegin(), str.rend());
  for (unsigned long i = 0; i < str.size(); i++)
    {
    str[i] = toupper(str[i]);
    str1[i] = toupper(str1[i]);
  }
  return str == str1;
}


//better solutions
bool isPalindrom (const std::string& str) {
  std::string lstr = str;
  for (char& c : lstr) c = toupper(c);
  return lstr == std::string(lstr.rbegin(), lstr.rend());
}

//2
#include <string>

bool isPalindrom (const std::string& str) {
  std::string::size_type slen = str.size();
  for(std::string::size_type i=0;i<slen/2;i++)
    if(std::tolower(str[i]) != std::tolower(str[slen-i-1])) return false;
  return true;
}
