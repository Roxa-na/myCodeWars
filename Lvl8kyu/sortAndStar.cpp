// You will be given a list of strings. You must sort it alphabetically (case-sensitive, and based on 
//the ASCII values of the chars) and then return the first value.

// The returned value must be a string, and have "***" between each of its letters.

// You should not remove or add elements from/to the array.


//my sol
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
std::string twoSort(std::vector<std::string> s)
{
  string temp = *min_element(s.begin(), s.end());
  string result = "";
  for (unsigned int i = 0; i < temp.size() -1; i++)
    {
    result.push_back(temp[i]);
    result.push_back('*');
    result.push_back('*');
    result.push_back('*');
  }
result.push_back(temp[temp.size() - 1]);
    return result;
}

// better sol

#include <algorithm>
#include <string>

using namespace std;

std::string twoSort(std::vector<std::string> s)
{
    string result = *min_element(s.begin(), s.end());
    for (int i = 1; i < result.size(); i += 4)
      result.insert(i, "***");
    return result;
}