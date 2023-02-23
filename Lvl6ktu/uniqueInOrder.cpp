// Implement the function unique_in_order which takes as argument a sequence and 
//returns a list of items without any elements with the same value next to each
// other and preserving the original order of elements.

// For example:

// uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
// uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
// uniqueInOrder([1,2,2,3,3])       == {1,2,3}

//my sol
#include <string>
#include <vector>
using namespace std;
template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
  //your code here
  vector<T> result;
  int i = 0;
  result.push_back(iterable[0]);
  for (auto& a : iterable)
    {
    if (a != result[i])
      {
      i++;
      result.push_back(a);
    }
  }
  return result;
}
std::vector<char> uniqueInOrder(const std::string& iterable){
  //your code here

    vector<char> result;
  int i = 0;
  result.push_back(iterable[0]);
  for (auto& a : iterable)
    {
    if (a != result[i])
      {
      i++;
      result.push_back(a);
    }
  }
  if (iterable.length() == 0) result.clear();
  return result;
}
