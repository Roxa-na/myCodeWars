//question
// Complete the function that counts the number of unique consonants in a string (made up of printable ascii characters).

// Consonants are letters used in English other than "a", "e", "i", "o", "u".

// Remember, your function needs to return the number of unique consonants - disregarding duplicates. For example, if the string passed into the function reads "add", the function should return 1 rather than 2, since "d" is a duplicate.

// Similarly, the function should also disregard duplicate consonants of differing cases. For example, "Dad" passed into the function should return 1 as "d" and "D" are duplicates.
// Examples

// "add" ==> 1
// "Dad" ==> 1
// "aeiou" ==> 0
// "sillystring" ==> 7
// "abcdefghijklmnopqrstuvwxyz" ==> 21
// "Count my unique consonants!!" ==> 7


//my solutions
#include <string>
#include <algorithm>
using namespace std;
unsigned int countConsonants(const std::string& str){
  // Your code here!
  string temp;
  //lowercase everything
  for (auto& a : str) temp.push_back(tolower(a));
  cout << temp << endl;
  //sort it
  sort(temp.begin(), temp.end());
  cout << temp << endl;
  //delete consecutive elements
  auto result = unique(temp.begin(), temp.end());
  temp.erase(result,temp.end());
  cout << temp << endl;
  //delete vowels and everything else
  temp.erase(remove_if(temp.begin(), 
                              temp.end(),
                              [](unsigned char x){ return (x >= 0 and x <= 96) or (x >= 123 and x <= 127) or (x == 'i') or (x == 'a') or (x == 'e') or (x == 'o') or (x == 'u'); }),temp.end());
 
  return temp.size();
}


//other solutions 1
#include <string>
#include <unordered_set>

unsigned int countConsonants(const std::string& str){
  std::unordered_set<char> res{'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
  for (char c : str) res.erase(std::tolower(c));
  return 21 - res.size();
}

//other solutions 2
#include <string>
#include <set>
#include <cctype>

unsigned int countConsonants(const std::string& str)
{
    std::set <char> cons;
    for (char ch: str) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (islower(ch) && ch != 'a' && ch != 'e'&& ch != 'i' && ch != 'o' && ch != 'u')
                cons.emplace(ch);
        }
    }
    return static_cast <unsigned int> (cons.size());
}