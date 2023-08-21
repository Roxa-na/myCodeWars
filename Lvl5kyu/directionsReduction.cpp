#include <map>
using namespace std;
 map<string, string> oppositeDirections { {"NORTH", "SOUTH"}, {"SOUTH", "NORTH"}, {"EAST", "WEST"}, {"WEST", "EAST"} };
class DirReduction
{
public:
    static vector<string> dirReduc(vector<string> &arr){
  vector<string> result;
  for (auto dir : arr){
    if (result.size() > 0 && result.back() == oppositeDirections[dir]){
      result.pop_back();
    }else{
      result.push_back(dir);
    }
  }
  return result;
}
};