#include <string>
#include <regex>
#include <iostream>
using namespace std;
std::string remove_parentheses(const std::string &str)
{
  
  string temp = str;
 regex pattern("\\([^()]*\\)"); //all substrings that match the regular expression \\([^()]*\\) with an empty string. This regular expression matches any substring that starts with an opening parenthesis, followed by zero or more characters that are not opening or closing parentheses, and ends with a closing parenthesis. 
  while(regex_search(temp,pattern)){
    temp = regex_replace(temp, pattern, "");
  }
  return temp;
}