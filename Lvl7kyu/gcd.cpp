long long mygcd(long long a, long long b) {
  return (b == 0) ? a : mygcd(b, a%b);
}

#include <numeric>

long long mygcd(long long a, long long b) {
  return std::gcd(a, b);
}