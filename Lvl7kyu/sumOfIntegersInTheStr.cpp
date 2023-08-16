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