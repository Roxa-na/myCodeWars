// Wilson primes satisfy the following condition. Let P represent a prime number.

// Then,

// ((P-1)! + 1) / (P * P)

// should give a whole number.

// Your task is to create a function that returns true if the given number is a Wilson prime.
//my solution

#include <cmath>
using namespace std;
bool amIWilson(unsigned n) {
  // Check if a number is a Wilson prime
  if (n == 0 or n ==1 or n == 2) return false;
  for (unsigned int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
  int res = 1;
  for (unsigned int i = 2; i < n; i++)
    {
    res = (res * i) % (n*n);
  }

  return res == (n*n)-1;
}
