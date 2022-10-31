// Create a function that takes 2 integers in form of a
// string as an input, and outputs the sum (also as a string):
//
// Example: (Input1, Input2 -->Output)
//
// "4",  "5" --> "9"
// "34", "5" --> "39"
// "", "" --> "0"
// "2", "" --> "2"
// "-5", "3" --> "-2"
//
// Notes:
//
//     If either input is an empty string, consider it as zero.
//
//     Inputs and the expected output will never exceed
//the signed 32-bit integer limit (2^31 - 1)
//


//my solution
#include <string>
using namespace std;
string sum_str(const string& a, const string& b) {
  if (a.size() == 0 && b.size() == 0) return "0";
  else if (b.size() == 0) return a;
  else if (a.size() == 0) return b;
  else return to_string(stoi(a) + stoi(b));
}

//solution 2
#include <string>
#include <sstream>

using namespace std;

string sum_str(const string& a, const string& b) {
    stringstream sa(a), sb(b);
    int num_a = 0, num_b = 0;
    sa >> num_a;
    sb >> num_b;
    int sum = num_a + num_b;

    return to_string(sum);
}
