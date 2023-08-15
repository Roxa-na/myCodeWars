unsigned int Cats(unsigned int start, unsigned int finish) {
  //your code here
  if (finish - start == 0) return 0;
  else return (finish - start)/3 + (finish - start)%3;
  return start + finish;
}