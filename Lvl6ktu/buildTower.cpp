// Build a pyramid-shaped tower, as an array/list of strings,
// given a positive integer number of floors. A tower block is
//represented with "*" character.
//
// For example, a tower with 3 floors looks like this:
//
// [
//   "  *  ",
//   " *** ",
//   "*****"
// ]

#include <string>
#include <vector>
using namespace std;
std::vector<std::string> towerBuilder(unsigned nFloors) {
  vector<string> vResult;
  string sTemp = "";
unsigned max = 2 * nFloors - 1;
  int nTemp = 0;
  unsigned nWhiteSpace = 0;
  for (unsigned i = 1; i <= nFloors; i++)
    {
    nTemp = 2 * i - 1;
    nWhiteSpace = (max - nTemp)/2;
    //This adds the whitespace before the characters
    for (int j = 0; j < nWhiteSpace; j++)
      {
      sTemp.push_back(32);
    }
    for (int j = 0; j <nTemp; j++)
      {
      sTemp.push_back('*');
    }
    //This adds the whitespace after the characters
    for (int j = 0; j < nWhiteSpace; j++)
      {
      sTemp.push_back(32);
    }
    vResult.push_back(sTemp);
    sTemp = "";
  }
  return vResult;
}

// a better and more clever solution than mine:
#include <string>
#include <vector>

using namespace std;

vector<string> towerBuilder(unsigned nFloors) {
  vector <string> vect;
  for(unsigned i = 0, k = 1; i < nFloors; i++, k+=2)
    vect.push_back(string(nFloors-i-1, ' ') + string(k, '*') + string(nFloors-i-1, ' '));
  return {vect};
}
