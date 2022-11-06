// It's the academic year's end, fateful moment of your school report.
// The averages must be calculated. All the students come to you and entreat
// you to calculate their average for them. Easy ! You just need to write a script.
//
// Return the average of the given array rounded down to its nearest integer.
//
// The array will never be empty.

//my solution
#include <numeric>
using namespace std;
int get_average(std::vector <int> marks)
{
  // Your Code is Here ... Enjoy !!!
  int sum = accumulate(marks.begin(), marks.end(), 0);
  int size = marks.size();
  return sum/size;
}
