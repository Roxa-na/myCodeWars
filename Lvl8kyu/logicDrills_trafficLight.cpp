// You're writing code to control your town's traffic lights.
//You need a function to handle each change from green, to yellow,
// to red, and then to green again.
//
// Complete the function that takes a string as an argument
//representing the current state of the light and returns a string
//representing the state the light should change to.
//
// For example, when the input is green, output should be yellow.

//my solution
#include <string>
using namespace std;
std::string update_light(std::string current) {
  //Your Code here


      if (current == "green") return "yellow";
       else if (current == "yellow") return "red";
      else return "green";
}

//best solution
#include <string>
#include <map>
std::string update_light(std::string current) {
  std::map<std::string, std::string> mp {{"green", "yellow"}, {"yellow", "red"}, {"red", "green"}};
  return mp[current];
}
