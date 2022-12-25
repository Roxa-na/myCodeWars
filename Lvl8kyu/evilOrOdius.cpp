// The number n is Evil if it has an even number of 1's in its
// binary representation.
// The first few Evil numbers: 3, 5, 6, 9, 10, 12, 15, 17, 18, 20

// The number n is Odious if it has an odd number of 1's in its
// binary representation.
// The first few Odious numbers: 1, 2, 4, 7, 8, 11, 13, 14, 16, 19

// You have to write a function that determine if a number
// is Evil of Odious, function should return "It's Evil!" in 
//case of evil number and "It's Odious!" in case of odious number.

//my solution
#include <string>
using namespace std;
std::string evil(int n)
{
  int temp = n;
  int sum = 0;
  string message[] = {"It's Evil!","It's Odious!"};
  cout << "n = " << n << endl;
  while(true){
    if (temp % 2 == 1) sum++;
    if (temp / 2 == 0) break;
    temp = temp/2;
  }
  return message[sum % 2];
}
// my sol2
#include <bits/stdc++.h>
std::string evil(int n)
{
  std::string message[] = {"It's Evil!","It's Odious!"};
  std::bitset<32> bits(n);
  return message[bits.count()%2];
}
// better sol
std::string evil(int n)
{
  std::bitset<32> bits(n);
  return (bits.count() & 1) ? "It's Odious!" : "It's Evil!";
}

