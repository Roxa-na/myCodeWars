//my solution
#include <string>
#include <algorithm>
using namespace std;
bool isAnagram(std::string test, std::string original){
  //your code here
  string temp1, temp2 = "";
  if (test.size() == original.size())
    {
    for(long i = 0; i < test.size(); i++)
      {
      temp1.push_back(tolower(test[i]));
    }
    for(long i = 0; i < original.size(); i++)
      {
      temp2.push_back(tolower(original[i]));
    }
   sort(temp1.begin(), temp1.end());
   sort(temp2.begin(), temp2.end());
    if (temp1 ==temp2) return true;
    else return false;
  }else return false;
}
// better solution
include <string>

bool isAnagram(std::string t, std::string o){

 if(t.size() != o.size())
  return false;
  
  std::transform(t.begin(),t.end(),t.begin(),::tolower);
  std::transform(o.begin(),o.end(),o.begin(),::tolower);
  std::sort(t.begin(),t.end());
  std::sort(o.begin(),o.end());
  
  return t==o;
  
}