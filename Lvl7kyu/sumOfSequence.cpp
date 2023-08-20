int sequenceSum(int start, int end, int step)
{
  int sum = 0;
  while(start <= end){
    sum = sum + start;
    start = start + step;
  }
  return sum;
}