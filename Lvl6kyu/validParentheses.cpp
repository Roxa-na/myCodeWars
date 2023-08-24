#include <string>
#include <stack>
using namespace std;
bool validParentheses(const string& str) {
  stack<char> st;
  for (auto a : str){
    if (a == '(') st.push(a);
    else if (a == ')')
      {
      if(st.empty()) return false;
      st.pop(); 
    }
  }
  return st.empty();
}

// nice solution
#include <string>

bool validParentheses(const std::string& str) {
  int open = 0;
  for(char c : str) {
    if((open += c == '(' ? 1 : -1) < 0) {
      return false;
    }
  }
  return !open;
}