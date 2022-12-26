// Complete the solution so that it reverses all of the words within the string passed in.

// Example(Input --> Output):

// "The greatest victory is that which requires no battle" --> "battle no requires which that is victory greatest The"

// Strings
//my sol
#include <algorithm>
 #include <vector>
#include <string>
#include <cstddef> 
using namespace std;
std::string reverse_words(const std::string& str) {
  string temp = " ";
  vector<string> result;
  size_t found = str.find_first_of(" ");
  int pos = 0;
  while(found != string::npos)
    {
    result.push_back(str.substr(pos,found - pos));
    pos = found + 1;
    found = str.find_first_of(" ", pos);
    }
  result.push_back(str.substr(pos,found - pos));
  reverse(result.begin(),result.end());
  temp.pop_back();
  for (auto& a : result)
    {
    temp.append(a);
    temp.push_back(' ');
  }
  temp.pop_back();
  return temp;
  
}
// other solutions
//sol1
#include <string>

std::string reverse_words(const std::string& str) {
    std::string res = "";
    std::string buffer = "";
    for(int i = 0; i< str.length(); i++)
    {
        if(str[i]==' ') {res = buffer +" "+ res; buffer = ""; }
        else buffer+= str[i];
    }
    res = buffer +" "+ res; 
    res.pop_back();
    return res;
}
//sol2
#include <string>
#include <iostream>

std::string reverse_words(const std::string& str) {
  std::string s;
  std::stringstream ss(str);
  std::string w;
  while (ss >> w) s = w + " " + s;
  s.pop_back();
  return s;
}

