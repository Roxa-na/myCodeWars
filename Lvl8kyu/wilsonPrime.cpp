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
  // first check if it is a prime number
  for (unsigned int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
// primes p, p such that ( p − 1 ) ! ≡ − 1   ( mod ⁡ p ^2 ) 
  int res = 1;
  for (unsigned int i = 2; i < n; i++)
    {
    res = (res * i) % (n*n);
  }

  return res == (n*n)-1;
}
// however, since the only numbers known to be wilson prime below E13 are 5,13,563 then 
bool amIWilson(unsigned n) {
    return n == 5 or n == 13 or n == 563;
}