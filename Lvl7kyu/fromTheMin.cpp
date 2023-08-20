
#include <vector>
#include <algorithm>
using namespace std; 

unsigned long long minValue (vector <int> values)
{
    // Your code is here .. enjoy !!!
  long long sum = 0;
  sort(values.begin(),values.end());
  auto last = unique(values.begin(), values.end());
  values.erase(last,values.end());
  for (auto& a : values){
    sum = sum * 10 + a;
  }
  
 return sum ; 
}