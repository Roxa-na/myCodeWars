
//my answer
#include <string>
using namespace std;
std::string SubtractSum(int n)
{
  string fruit[] = {"kiwi","pear","kiwi","banana","melon","banana","melon","pineapple","apple","pinepple","cucumber","pineapple","cucumber","orange","grape","orange","grape","apple","grape","cherry","pear","cherry","pear","kiwi","banana","kiwi","apple","melon","banana","melon","pineapple","melon","pineapple","cucumber","orange","apple","orange","grape","orange","grape","cherry","pear","cherry","pear","apple","pear","kiwi","banana","kiwi","banana","melon","pineapple","melon","apple","cucumber","pineapple","cucumber","orange","cucumber","orange","grape","cherry","apple","cherry","pear","cherry","pear","kiwi","pear","kiwi","banana","apple","banana","melon","pineapple","melon","pineapple","cucumber","pineapple","cucumber","apple","grape","orange","grape","cherry","grape","cherry","pear","cherry","apple","kiwi","banana","kiwi","banana","melon","banana","melon","pineapple","apple","pineapple"};
  int number = n;
  bool flag = 0;
  int sum = 0;
  int result = 0;
  while (!flag){
    
    while (n != 0) {
sum = sum + n % 10;
n = n / 10;
}
    result = number - sum;
    if (result <= 100){
      flag = 1;
    }
    else{
           
      number = result;
      n = result;
      sum = 0;
    }
  }
    return fruit[result-1];
}

//the most clever answer

#include <string>
using namespace std;

std::string SubtractSum(int n)
{
  return "apple";
}

/*
Expalantion: note that every multiple of 9 from 1-100 is paired with "apple".

Let digits(n) be the sum of the digits of n.
Claim: Given 10 <= n, n - digits(n) is a multiple of 9.
Proof: Proceeds by induction. The base case is trivial; 10 - 1 = 9. 
       Now, for some n greater than 10, suppose that n - digits(n) = 9 * k for some integer k.
       It suffices to show that (n + 1) - digits(n + 1) = 9 * m for some integer m. 
       If n does not end in a 9, the result follows from the observation that in this case,
       digits(n + 1) = digits(n) + 1; algebra then yields that 
         (n + 1) - digits(n + 1) = n - digits(n) + 1 - 1 = n + digits(n) = 9 * k. 
       Suppose then that n does end in a 9. Consider the digits of n. If all are 9, the result is 
       again immediate: digits(n + 1) = 1 so (n + 1) - digits(n + 1) = n + 1 - 1 = n, which of course
       is a multiple of 9 (as all its digits are 9). If at least one is *not* 9, then the lowest non-9
       digit is incremented (and all 9's before it are set to 0). This means that the relationship
         digits(n + 1) = digits(n) + 1 - 9 * s
       holds where s is an integer (the number of 9's prior to the first non-9 digit). 
       Thus
          (n + 1) - digits(n + 1) = n + 1 - digits(n) - 1 + 9 * s = 9 * (k + s).
       The claim holds by induction. 
*/