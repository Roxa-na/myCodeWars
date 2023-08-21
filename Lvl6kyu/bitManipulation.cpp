#include <bitset>
using namespace std;
long eliminate_unset_bits(string number){
  // TODO
  string binary = "";
  for (auto a : number){
    if (a == '1') binary.push_back(a);
  }
  bitset<64> bits(binary);
  return bits.to_ulong();
}