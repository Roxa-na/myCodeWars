#include <string>
std::string encode(const std::string &str) {
  std::string temp = str;
  for (auto& ch : temp){
    if (ch == 'a') ch = '1';
    else if (ch == 'e') ch = '2';
    else if (ch == 'i') ch = '3';
    else if (ch == 'o') ch = '4';
    else if (ch == 'u') ch = '5';
  }
  return temp;
}

std::string decode(const std::string &str) {
  std::string temp = str;
  for (auto& ch : temp){
    if (ch == '1') ch = 'a';
    else if (ch == '2') ch = 'e';
    else if (ch == '3') ch = 'i';
    else if (ch == '4') ch = 'o';
    else if (ch == '5') ch = 'u';
  }
  return temp;
}
2 minutes agoRefactorDiscuss
7 kyu
Sum of integers in string
C++:
#include <string>
#include <regex>
using namespace std;
int sumOfIntegers (const std::string& str) {
  regex pattern("\\d+");
  int sum = 0;
  string s = str;
  smatch match;
  while (regex_search(s,match,pattern)){
    for (auto m : match) {
            sum += std::stoi(m);
        }
        s = match.suffix();
    }
  return sum;
}