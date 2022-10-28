// Your task is to make two functions ( max and min, or maximum and
//minimum, etc., depending on the language ) that receive a list
// of integers as input, and return the largest and lowest number
//in that list, respectively.

//my solution

#include <vector>
#include <algorithm>
using namespace std;


int min(vector<int> list){
    sort(list.begin() , list.end());
    return list[0];
}

int max(vector<int> list){
    sort(list.begin() , list.end());
    return list[list.size()-1];
}

// better solution
#include <vector>
#include <algorithm>
using namespace std;

int min(vector<int> list)
{
  return *(min_element(list.begin(), list.end()));
}

int max(vector<int> list)
{
  return *(max_element(list.begin(), list.end()));
}
