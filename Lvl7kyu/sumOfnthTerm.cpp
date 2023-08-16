#include <sstream>
#include <iomanip>
using namespace std;
string seriesSum(int n)
{
    // Happy Coding ^_^
  if (n == 0) return "0.00";
  else if (n == 1) return "1.00";
  else{
  int j = 3;
  float result = 1.0;
  for (int i = 1; i< n; i++ )
    {
    result = result +1.0/(i+j);
    cout << result << endl;
    j= j + 2;
  }
   ostringstream stream;
   stream << fixed << setprecision(2) << result; 
  return stream.str();
     }
}