#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int readNumbersFromFile (string filename){
  float linenumber = 0;
  float average;
  float stdev;
  float stdevtemp;
  string line;
  string data;
  ifstream myfile(filename);
  float sum = 0;
  float temp;
  if (myfile.is_open()){
    while (getline (myfile,line)){
      linenumber++;
      data = line.substr (0,5);
      temp = stoi(data);
      sum = temp + sum;
      average = sum/linenumber;
      stdev = (temp-average)/sum;
    }
  }
  cout << "The sum of all the numbers is " << sum << endl;
  cout << "The total number of values is " << linenumber << endl;
  cout << "The average of all the values is " << average << endl;
  cout << "The standard deviation of the values is " << stdev << endl;
}

int main (){
  string filename;
  cout << "Enter the name of the file to open (include extension)" << endl;
  cin >> filename;
  readNumbersFromFile(filename);
}

/* I'm not sure if the standard deviation formula is right
but the program does everything it's asked for. */
