
int sumTriangularNumbers(int n) {
  int sum = 0;
  if (n > 0) {
    for (int i = 1; i <= n; i++){
      sum = sum + (i * (i+1)/2);
    }
  }
  return sum;
}

// -----------------------------
unsigned int sumTriangularNumbers(const int n)
{
  return n<0 ? 0 : n*(n+1)*(n+2)/6 ;
}