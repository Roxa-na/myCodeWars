//Simple, remove the spaces from the string, then return the resultant string.
#include <string>
using namespace std;
std::string no_space(const std::string& x)
{
  string result;
   for (auto& a : x)
     {
     if (a != 32) result.push_back(a);
   }
  return result;
}
