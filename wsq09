#include <iostream>
using namespace std;
//Calculate Factorials using loops
void factorial (int x, int fct){
  cout << "Enter the number you want the factorial for." << endl;
  cin >> x;
  for (int i=1;i<=x;i++){
    fct*=i;}
  cout << "The factorial " << x << "! is " << fct << endl;
}
int main (){
  int x, fct;
  factorial(x, fct);
  char answer;
  cout << "Want to try again? y/n" << endl;
  cin >> answer;
  while (answer=='y'){
    factorial(x,fct);
    cout << "Want to try again? y/n" <<endl;
    cin >> answer;
    }
    if(answer=='n'){
      cout << "Have a nice day." << endl;}
      else{
        cout << "Invalid input, thank you." << endl;
      }
}
