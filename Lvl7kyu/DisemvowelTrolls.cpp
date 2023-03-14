// Trolls are attacking your comment section!

// A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

// Your task is to write a function that takes a string and return a new string with all vowels removed.

// For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

// Note: for this kata y isn't considered a vowel.

//my solution


# include <string>
using namespace std;

std::string disemvowel(const std::string& str) {
    // return
  string sStr = str;
  sStr.erase(remove(sStr.begin(), sStr.end(), 'A'), sStr.end());
  sStr.erase(remove(sStr.begin(), sStr.end(), 'a'), sStr.end());
  sStr.erase(remove(sStr.begin(), sStr.end(), 'e'), sStr.end());
  sStr.erase(remove(sStr.begin(), sStr.end(), 'E'), sStr.end());
  sStr.erase(remove(sStr.begin(), sStr.end(), 'i'), sStr.end());
  sStr.erase(remove(sStr.begin(), sStr.end(), 'I'), sStr.end());
  sStr.erase(remove(sStr.begin(), sStr.end(), 'o'), sStr.end());
  sStr.erase(remove(sStr.begin(), sStr.end(), 'O'), sStr.end());
  sStr.erase(remove(sStr.begin(), sStr.end(), 'u'), sStr.end());
  sStr.erase(remove(sStr.begin(), sStr.end(), 'U'), sStr.end());
  return sStr;
}

//better solution
//1
# include <string>
# include <regex>
std::string disemvowel(std::string str)
{
  std::regex vowels("[aeiouAEIOU]");
  return std::regex_replace(str, vowels, "");
}
//2
# include <string>

std::string disemvowel(std::string str)
{
    for ( auto letter : "AEIOUaeiou" ) {
      str.erase(std::remove(str.begin(), str.end(), letter), str.end());
    }
    
    return str;
