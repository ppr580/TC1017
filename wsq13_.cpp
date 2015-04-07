#include <iostream>
using namespace std;

float sqrt(float x){
  float ref=x, t;
  while (t != ref){
    t = ref;
    ref = (x/ref +ref)/2;
  }
  return ref;
}

int main (){
  float x;
  cout << "Enter the number you'd like to test the Babylonian method with " << endl;
  cin >> x;
  sqrt(x);
  cout << "The square root of " << x << " is " << sqrt(x) << endl;
}

/* Special thanks to Eric Buffington at Youtube for the
method Tutorial*/
