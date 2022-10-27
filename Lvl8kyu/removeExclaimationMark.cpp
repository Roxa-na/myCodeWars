// Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
#include <string>
using namespace std;
std::string removeExclamationMarks(std::string str){
  //your code here
  str.erase(remove(str.begin(),str.end(),'!'), str.end());
  return str;
}
