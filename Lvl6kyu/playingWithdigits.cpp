#include <math.h>
using namespace std;
class DigPow
{
public:
  static int digPow(int n, int p){
    string number = to_string(n);
    int sum = 0;
    for (auto a : number){
      sum = sum + pow(a - '0',p);
      p++;
    }
    if (sum % n == 0) return sum/n;
    else return -1;
  }
  
};
