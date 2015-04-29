#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int check_banana(string filename){
  ifstream myfile(filename);
  int linenumber = 1;
  string line;
  string check;
  int counter = 0;
  if (myfile.is_open()){
    while (getline(myfile,line)){
      linenumber++;
      check = line.substr(0,6);
      if(check.compare("banana")==0 || check.compare("BANANA")==0){
        counter++;
      }
    }
  }
  return counter;
}

int main(){
  string filename;
  cout << "Enter the name of the file to compare" << endl;
  cin >> filename;
  cout << "The word banana is written " << check_banana(filename) << " times." << endl;
}

//I tried using the <locale> library to transform a string
//into purely lowercase, but I couldn't compare it to
//a string, as it was a "loc" variable.

/* Here's the contents of the file used to test the code, for
which the code said that Banana was written 5 times.
banana
BANANA
Ban
Ana
bob
Barney
Stinson
BANANAS
bananas
bananasmakeyougocrazy
*/
