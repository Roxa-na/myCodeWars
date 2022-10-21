//Kata: Given a month as an integer from 1 to 12, return to which
//quarter of the year it belongs as an integer number.


//my solution
int quarter_of(int month){
  switch(month)
    {
      case 1 ... 3: return 1;
      case 4 ... 6: return 2;
      case 7 ... 9: return 3;
      default: return 4;
  }
}

// clever solution
//1
int quarter_of(int month){
  return (month + 2) / 3;
}
//2
#include <cmath>

int quarter_of(int month)
{
  return ceil(month/3.0);
}
