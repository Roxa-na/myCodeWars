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
// another sol // better

#include <sstream>
#include <iomanip>

class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b);
};

std::string RGBToHex::rgb(int r, int g, int b)
{
  std::ostringstream oss;
  oss << std::uppercase << std::setfill('0') << std::hex
      << std::setw(2) << (r < 0 ? 0 : r > 255 ? 255 : r)
      << std::setw(2) << (g < 0 ? 0 : g > 255 ? 255 : g)
      << std::setw(2) << (b < 0 ? 0 : b > 255 ? 255 : b);
  return oss.str();
}

//
#include <algorithm>
#include <cstdio>

namespace RGBToHex
{
    std::string rgb(int r, int g, int b)
    {
        char result[7];
        std::sprintf(result, "%02X%02X%02X",
            std::clamp(r, 0, 255),
            std::clamp(g, 0, 255),
            std::clamp(b, 0, 255));
        return result;
    }
}