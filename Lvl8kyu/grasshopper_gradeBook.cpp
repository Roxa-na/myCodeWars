// Grade book
//
// Complete the function so that it finds the average of the three
// scores passed to it and returns the letter value associated with that grade.
// Numerical Score 	Letter Grade
// 90 <= score <= 100 	'A'
// 80 <= score < 90 	'B'
// 70 <= score < 80 	'C'
// 60 <= score < 70 	'D'
// 0 <= score < 60 	'F'
//
// Tested values are all between 0 and 100. Theres is no need to
// check for negative values or values greater than 100.

//my solution
char getGrade(int a, int b, int c) {
  float avg = (a + b +c) / 3.0;
  if (avg >= 90 && avg <= 100) return 'A';
  else if (avg >= 80 && avg < 90) return 'B';
  else if (avg >= 70 && avg < 80) return 'C';
  else if (avg >= 60 && avg < 70) return 'D';
  else return 'F';
}
// awesome practices
//1
char getGrade(int a, int b, int c) {
  int avg = (a + b + c) / 3;
  switch(avg){
  case 90 ... 100: return 'A';
  case 80 ... 89: return 'B';
  case 70 ... 79: return 'C';
  case 60 ... 69: return 'D';
  default: return 'F';
  }
}
//2
inline constexpr char getGrade(const int a, const int b, const int c) noexcept {
  auto s = (a + b + c) / 3;
  return s >= 90 ? 'A' :
         s >= 80 ? 'B' :
         s >= 70 ? 'C' :
         s >= 60 ? 'D' :
                   'F';
}
