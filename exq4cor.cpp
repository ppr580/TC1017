//Hector Islas León
// I now know I must take the string, reverse it, and compare it. If there's no difference, then return "true".
// in any other case, return false.
#include <isotream>
#include <string>
#include <iterator>
using namespace std;

bool isPalindrome (string x){
  if ((x.length()==0) or (x.length ()==1)){
  return true;
  }
  else if(x.begin()==x.end())
  {
    return isPalindrome(x.substr(i,x.length()-1);
  }
  else{
  return false;
  }
  }
  
  int main(){
  string x;
  cout <<"Please enter a word" << endl;
  cin >> x;
  if (isPalindrome(x)){
    cout << "It's a palindrome" << endl;}
  else {
    cout << "It's not a palindrome" << endl;}
    return 0;
