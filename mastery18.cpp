#include <iostream>
using namespace std;
int main(){
  cout << "Enter a value" << endl;
  float x;
  cin >> x;
  if (x<33){
    cout << "This number is quite under the 100 mark." << endl;
  }
  else{
    if(x>33 && x<66){
      cout << "This number is still far from 100." << endl;
    }
    else{
      cout << "This number is close to 100!" << endl;
    }
  }
}
