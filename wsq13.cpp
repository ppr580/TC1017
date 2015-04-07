#include <iostream>
using namespace std;
void gcd (int a, int b, int d){
cout << "Enter a first parameter" << endl;
cin >> a;
cout << "Enter a second parameter" << endl;
cin >> b;
for (int i=1; i<=a && i<=b; i++){
  if(a%i == 0 && b%i == 0){
    d=i;}
  }
  cout << "The greatest common divisor of " << a <<
  " and " << b << " is " << d << endl;
}
int main (){
  int a,b,d;
  gcd(a,b,d);
}
