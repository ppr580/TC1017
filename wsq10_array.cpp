#include <iostream>
#include <cmath>
using namespace std;
int main(){
float list[10];
cout << "Enter the amount of numbers to be in the list" << endl;
float sum, avrg, stdev;
int i;
cout << "Please enter 10 values to work with" << endl;
for (i=0; i<10; i++){
  cin >> list[i];}
    sum=list[0]+list[1]+list[2]+list[3]+list[4]+list[5]+list[6]+list[7]+list[8]+list[9];
    avrg = sum/10;
    stdev =sqrt(avrg);
  cout << "The sum of all the values is " << sum << endl;
  cout << "The average of such values is " << avrg << endl;
  cout << "The standard deviation is " << stdev << endl;
}
