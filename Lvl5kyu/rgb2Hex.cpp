#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
class RGBToHex
{
  public:
  static string rgb(int r, int g, int b){
    r = max(r,0);
    g = max(g,0); 
    b = max(b,0);
    r = min(255,r);
    g = min(255,g);
    b = min(255,b);
    stringstream ss;
    ss << hex << setw(2) << setfill('0') << r << hex << setw(2) << setfill('0') << g << hex << setw(2) << setfill('0') << b;
    string s = ss.str();
    for (auto& a : s) a = toupper(a);
    cout << s << endl;
    return s;
  }
};
