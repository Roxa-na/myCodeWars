#include <string>
using namespace std;
// input is a string of three chars from the set
// 'D', 'F', 'I', 'K'; output is a single char from this set
char trilingual_democracy(const std::string& group) {
  // implement the rules...
  string temp = "DFKI";
  if (group[0] == group[1] && group[2] == group[1]) return group[0];
  else if (group[0] == group[1]) return group[2];
  else if (group[1] == group[2]) return group[0];
  else if (group[0] == group[2]) return group[1];
  else {
    for (auto& ch : temp)
      if (group.find(ch) == string::npos) return ch;
  }
}

//far better solution
char trilingual_democracy( const std::string& group ) {
  return group[ 0 ] xor group[ 1 ] xor group[ 2 ];
}