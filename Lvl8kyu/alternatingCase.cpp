// Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase. For example:
//
// "hello world".toAlternatingCase() === "HELLO WORLD"
// "HELLO WORLD".toAlternatingCase() === "hello world"


//my solution
using namespace std;
std::string to_alternating_case(const std::string& str)
{
	string temp = str;
  for (auto& s : temp)
    {
    if (s >= 'A' && s <= 'Z')
      {
      s = s + 32;
    } else if (s >= 'a' && s <= 'z')
      {
      s = s - 32;
    }
  }
  return temp;
}


//clever solutions
#include <iostream>

std::string to_alternating_case(std::string str)
{
  for(auto& ch : str)
  {
    ch = std::islower(ch) ? std::toupper(ch) : std::tolower(ch);
  }
  return str;
}
