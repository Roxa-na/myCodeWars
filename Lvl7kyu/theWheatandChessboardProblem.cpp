#include <math.h>
#include <iostream>
using namespace std;
unsigned int squaresNeeded(long long n) {
  //your code here
  long long result = 0; 
  if (n == 0) return 0;
  else{
    for (int i = 1; i <= 64; i++)
      {
      if (n <= result) return i-1;
      else result = result + pow(2,i-1);
    }
  }
}
// better solution
#include <cmath>

unsigned int squaresNeeded(long long n) {
    return std::log2(n) + 1;
}