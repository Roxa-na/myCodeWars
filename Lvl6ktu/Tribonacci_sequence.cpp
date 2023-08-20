using namespace std;
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
  if (n >= 3){
   for (auto& a : signature){
    result.push_back(a);
  }
  for (int i = 2; i < n-1 ; i++){
    result.push_back(result.at(i) + result.at(i-1)+result.at(i-2));
  } 
  }else if (n < 3 && n > 0){
    for (int i = 0; i < n ; i++){
    result.push_back(signature.at(i));
  } 
  }
    return result;
}
//------------
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    if(n<3){
       signature.resize(n);
    }
    for(unsigned int i = 3; i<n;i++){
      signature.push_back(signature[i-3]+signature[i-2]+signature[i-1]);
    }
    return signature;
}