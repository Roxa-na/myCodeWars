// I got them at the same time as kitten/puppy. That was humanYears years ago.
//
// Return their respective ages now as [humanYears,catYears,dogYears]
//
// NOTES:
//
//     humanYears >= 1
//     humanYears are whole numbers only
//
// Cat Years
//
//     15 cat years for first year
//     +9 cat years for second year
//     +4 cat years for each year after that
//
// Dog Years
//
//     15 dog years for first year
//     +9 dog years for second year
//     +5 dog years for each year after that

//my solution
#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  //your code here
  int catYears = 0;
  int dogYears = 0;
  switch(humanYears){
      case 1: catYears = 15;break;
      case 2: catYears = 24;break;
      default: catYears = 24 + 4 * (humanYears - 2);
  }
  if (humanYears != 1 && humanYears != 2) dogYears = catYears + (humanYears - 2);
  else dogYears = catYears;
  return {humanYears, catYears, dogYears };
}

//solution 2
