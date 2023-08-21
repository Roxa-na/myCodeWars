unsigned int countRedBeads( unsigned int n ) {
  //Your code here
  unsigned int sum = 0;
  if(n >= 2){
    for (int i = 2; i <=n; i++) sum = sum + 2;
  }
  return sum;
}