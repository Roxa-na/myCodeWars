// You're at the zoo... all the meerkats look weird.
//Something has gone terribly wrong - someone has gone and switched
// their heads and tails around!
//
// Save the animals by switching them back. You will be given an
//array which will have three values (tail, body, head). It is your job to
//re-arrange the array so that the animal is the right way round (head, body, tail).
//
// Same goes for all the other arrays/lists that you
//will get in the tests: you have to change the element positions
// with the same exact logics
//
// Simples!
//solution
#include <array>
#include <string>
using namespace std;
std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
  // your code here
  string temp = arr[2];
  arr[2] = arr[0];
  arr[0] = temp;
  return arr;
}
//better solution
std::array<std::string, 3> fixTheMeerkat(const std::array<std::string, 3>& xs) {
  return {xs[2], xs[1], xs[0]};
}
