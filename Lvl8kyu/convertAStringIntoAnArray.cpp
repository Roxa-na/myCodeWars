// Write a function to split a string and convert it into an array of words.
// Examples (Input ==> Output):

// "Robin Singh" ==> ["Robin", "Singh"]

// "I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
//my solution
#include <vector>
#include <string>
#include <cstddef> 
using namespace std;
std::vector<std::string> string_to_array(const std::string& s) {
  vector<string> result;
  size_t found = s.find_first_of(" ");
  int pos = 0;
  while(found != string::npos)
    {
    result.push_back(s.substr(pos,found - pos));
    pos = found + 1;
    found = s.find_first_of(" ", pos);
    }
  result.push_back(s.substr(pos,found - pos));
  return result; // your code here
}
//better solution
#include <vector>
#include <string>
using namespace std;

vector<string> string_to_array(const string& s) {
  vector<string> res;
  stringstream ss(s + " ");
  string word;
//istream& getline(istream& is, 
 //          string& str, char delim);
 
  while (getline(ss, word, ' ')) res.push_back(word);
  return res;
}