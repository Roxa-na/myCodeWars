#include <string>
#include <vector>
using namespace std;
vector<string> number(const vector<string> &lines)
{
  vector<string> result;
  int i = 1;
  for (auto a : lines){
    result.push_back(to_string(i) + ": " + a);
      i++;
  }
    return result;
}