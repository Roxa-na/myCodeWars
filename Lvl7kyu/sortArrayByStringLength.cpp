#include <algorithm>
using namespace std;
class Kata
{
public:
    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {
      sort(array.begin(),array.end(), [](string s1, string s2){ return s1.size() < s2.size();});
        return array;
    }
};