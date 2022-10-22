//Build a function that returns an array of integers from n to 1 where n>0.


//my solution
#include <numeric>
using namespace std;
std::vector<int> reverseSeq(int n) {
  //your code here
  vector<int> res(n);
  iota(res.begin(), res.end(), 1);
  reverse(res.begin(), res.end());
  return res;
}
//better solution
std::vector<int> reverseSeq(int n) {
  std::vector<int> seq(n);
  std::iota(seq.rbegin(), seq.rend(), 1);

  return seq;
}
