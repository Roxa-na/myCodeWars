// Complete the function which converts hex number (given as a string) to a decimal number.
//solution
#include <cmath>
#include <unordered_map>
using namespace std;
unordered_map<char,int> hexMap = {{'0', 0}, {'1', 1},
                                  {'2', 2}, {'3', 3},
                                  {'4', 4}, {'5', 5},
                                  {'6', 6}, {'7', 7},
                                  {'8', 8}, {'9', 9},
                                  {'A', 10},{'a', 10},
                                  {'B', 11},{'b', 11},
                                  {'C', 12},{'c', 12},
                                  {'D', 13},{'d', 13},
                                  {'E', 14},{'e', 14},
                                  {'F', 15},{'f', 15}};



int hexToDec(std::string hexString)
{
  int power = hexString.size() - 1;
  int num = 0;
  for (auto& a : hexString)
    {
      num = num + hexMap[a]* pow(16,power);
    power = power - 1;
  }
  if (hexString[0] == '-') num = -num;
    return num;
}
//a way better solution
//1
#include <string>

int hexToDec(const std::string& hexString)
{
    return std::stoi(hexString, nullptr, 16);
}
//2
#include <ios>

int hexToDec(std::string hexString)
{
  int n;
  std::istringstream(hexString) >> std::hex >> n;

  return n;
}
//3
int hexToDec(std::string hexString)
{
    return (int)strtol(hexString.c_str(), 0, 16);
}
//4
#include<algorithm>
#include<math.h>

int hexToDec(std::string hexString)
{
    int index = 0, result = 0, inDec = 0;
    reverse(hexString.begin(), hexString.end());
    for (char c : hexString){
        switch(c){
            case '0' ... '9': inDec = int(c) - 48; break;
            case 'a' ... 'f': inDec = int(c) - 87; break;
            case 'A' ... 'F': inDec = int(c) - 55; break;
            case '-' : result *= -1; break;
            default: break;
        }
            result += inDec * pow(16, index);
            index ++;
            inDec = 0;
    }
    return 
