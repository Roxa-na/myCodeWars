// Given a string s, write a method (function) that will return true if its a valid single integer or floating number or false if its not.

// Valid examples, should return true:

// isDigit("3")
// isDigit("  3  ")
// isDigit("-3.23")

// should return false:

// isDigit("3-4")
// isDigit("  3   5")
// isDigit("3 5")
// isDigit("zero")

//my solution
using namespace std;
bool is_digit(std::string s) {
  // your code here
  // empty string
  //cout << s << endl;
  if (s.size() == 0) return false;
  // alphabet and other characters that are not related
  for (auto& c : s)
    {
    if (!(c >= '0' and c <= '9') and !(c == '.' or c == '-')) {return false; break;}
  }
  // evaluate number
  int pos1 = s.find_first_of("0123456789");
  int pos2 = s.find_last_of("0123456789");
  //cout << pos1 << endl;
  //cout << pos2 << endl;
  string numStr = s.substr(pos1,pos2 - pos1 + 1);
  //cout << numStr << endl;
  for (unsigned long i = 0; i < numStr.size(); i++)
    {
    if (!(numStr[i] >= '0' and numStr[i] <= '9') and !(numStr[i] == '.')) {return false; break;}
  }
  return true;
}
