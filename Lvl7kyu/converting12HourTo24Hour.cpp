#include <string>
#include <iomanip>
#include <sstream>
using namespace std;
string to24HourTime(int hour, int minute, const string& period) {
  stringstream ss;
  if (period == "am"){
    if (hour == 12) hour = 0;
    ss << setw(2) << setfill('0') << hour << setw(2) << setfill('0') << minute;
  }else{
   if (hour != 12) hour = hour + 12;
   ss << setw(2) << setfill('0') << hour << setw(2) << setfill('0') << minute;
  }
  return ss.str();
}