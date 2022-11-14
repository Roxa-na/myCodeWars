//Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.
using namespace std;

string replace(const string &s)
{
    string temp = s;
    for (auto& c : temp){
      if (c == 'a'|| c == 'o'|| c == 'i'|| c == 'e'|| c == 'u'|| c == 'A'|| c == 'E'|| c == 'I'|| c == 'O'|| c == 'U') c= '!';
    }
  return temp;
}

//good solution 1

#include <string>
#include <regex>

using namespace std;

string replace(const string &s)
{
  return regex_replace(s, regex("[aeiouAEIOU]"), "!");
}

//good solution 2
sing namespace std;

string replace(string s) {
  string vowels = "aeiouAEIOU";
  for (auto& c : s) if (vowels.find(c) != string::npos) c = '!';
  return move(s);
}
