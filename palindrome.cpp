#include <iostream>
using namespace std;
/* Evaluate a number and say if it can be read the
same way backwards as it can be done forward*/
void palindrome (int n, int num, int dig, int rev){
  cout << "Enter the number to evaluate" << endl;
  cin >> n;
  rev = 0;
  num = n;
  while (num > 0){
  dig = num%10;
  rev = (rev*10)+dig;
  num = num/10;}
  if (n==rev){
    cout << "The number " << n << " is a palindrome" << endl;}
    else {
      cout << "The number " << n << " is not a palindrome" << endl;}
}
int main (){
  int n, num, dig, rev;
  palindrome(n,num,dig,rev);
}
/* Knowledge and program base from:
http://www.lifengadget.com/lifengadget
/program-check-whether-number-palindrome-cplusplus/
*/
