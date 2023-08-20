#include <cstdint>
#include <string>
#include <bitset>
using namespace std;
std::string add_binary(uint64_t a, uint64_t b) {
   bitset<64> binary_number(a + b);
  string num = binary_number.to_string();
 if (a + b != 0) return num.erase(0, num.find_first_not_of('0'));
  else return "0";
}
//
#include <cstdint>
#include <string>
#include <fmt/core.h>

std::string add_binary(std::uint64_t a, std::uint64_t b) {
  return fmt::format("{:b}", a + b);
}
//This is a C++ function that takes two unsigned
// 64-bit integers as input and returns their 
//sum in binary format as a string. The function 
//uses the `fmt` library to format the sum as a 
//binary string.

