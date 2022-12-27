// // Your function takes as parameter the number of times the cube has been cut.
// //  You must return the number of smaller cubes created by the cuts that have at least one red face.
// Examples:
// countSquares(2) --> 26
// countSquares(4) --> 98

// my sol
#include <cmath>
using namespace std;
int countSquares(int cuts)
{
    //Happy Coding :)
  if (cuts == 0) return 1;
  else return pow((cuts + 1),3) - pow((cuts -1),3);
}

//other sol
int countSquares(int cuts)
{
    return cuts == 0 ? 1 : 6 * cuts * cuts + 2;
}