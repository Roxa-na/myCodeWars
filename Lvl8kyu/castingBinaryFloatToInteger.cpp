//my solution
using namespace std;
int convert_to_int(float f) {
  union {
    float input;
    int output;
  }data;
  data.input = f;
  return data.output;
}
// better solution
int convert_to_int(float f) {
  return *reinterpret_cast<int *>(&f);
}