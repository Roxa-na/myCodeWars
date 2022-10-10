// Introduction
//
// The GADERYPOLUKI is a simple substitution cypher used in scouting to encrypt messages. The encryption is based on short, easy to remember key. The key is written as paired letters, which are in the cipher simple replacement.
//
// The most frequently used key is "GA-DE-RY-PO-LU-KI".
//
// G => A
// g => a
// a => g
// A => G
// D => E
//  etc.
//
// The letters, which are not on the list of substitutes, stays in the encrypted text without changes.
// Task
//
// Your task is to help scouts to encrypt and decrypt thier messages. Write the Encode and Decode functions.
// Input/Output
//
// The input string consists of lowercase and uperrcase characters and white . The substitution has to be case-sensitive.
// Example
//
// encode("ABCD")          // => GBCE
// encode("Ala has a cat") // => Gug hgs g cgt
// encode("gaderypoluki"); // => agedyropulik
// decode("Gug hgs g cgt") // => Ala has a cat
// decode("agedyropulik")  // => gaderypoluki
// decode("GBCE")          // => ABCD
//
//solution:
#include <map>
using namespace std;
map<char, char> cypherMap = {{'G', 'A'}, {'A', 'G'},
  {'g', 'a'}, {'a', 'g'},{'D', 'E'}, {'E', 'D'},
  {'R', 'Y'}, {'P', 'O'},{'L', 'U'}, {'K', 'I'},
  {'Y', 'R'}, {'O', 'P'},{'U', 'L'}, {'I', 'K'},
  {'d', 'e'}, {'e', 'd'},{'r', 'y'}, {'y', 'r'},
  {'p', 'o'}, {'o', 'p'},{'l', 'u'}, {'u', 'l'},
  {'k', 'i'}, {'i', 'k'}};

string encode(string str)
{

  for (auto& a : str)
    {
      if (cypherMap.find(a) != cypherMap.end())
        {
          a = cypherMap.find(a) -> second;
        }
    }
    return str;
}

string decode(string str)
{

  for (auto& a : str)
    {

      if (cypherMap.find(a) != cypherMap.end())
        {
           a = cypherMap.find(a) -> second;
        }
    }
    return str;
}
