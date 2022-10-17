// Character recognition software is widely used to digitise
// printed texts. Thus the texts can be edited, searched and stored on a computer.
//
// When documents (especially pretty old ones written with a typewriter),
// are digitised character recognition softwares often make mistakes.
//
// Your task is correct the errors in the digitised text. You only
//have to handle the following mistakes:
//
//     S is misinterpreted as 5
//     O is misinterpreted as 0
//     I is misinterpreted as 1
//
// The test cases contain numbers only by mistake.

#include <string>
using namespace std;
std::string correct(std::string str){
  //your code here
  for (auto& c : str)
    {
    if (c == '5') c = 'S';
    else if (c == '0') c= 'O';
    else if (c == '1') c = 'I';
  }
  return str;
}

//another solution: more clever one
#include <string>

std::string correct(std::string str){
  replace(str.begin(), str.end(), '5', 'S');
  replace(str.begin(), str.end(), '0', 'O');
  replace(str.begin(), str.end(), '1', 'I');
  return str;
}
