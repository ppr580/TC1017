#include <vector>
#include <iostream>
using namespace std;

int findThrees (vector <int> divisible, int size){
  int sum = 0;
  int temp;
  for (int i = 0; i < size; i++){
    if (divisible[i]%3 == 0){
      temp = divisible[i];
      sum = temp + sum;
    }
  }
  return sum;
}

int main(){
  int size;
  int value;
  int sum;
  cout << "Enter the size of your list." << endl;
  cin >> size;
  vector <int> divisible(size);
  divisible.reserve (size);
  cout << "Enter the values for your list." << endl;
  for (int j = 0; j < size; j++){
    cin >> value;
    divisible[j] = value;
  }
  sum = findThrees(divisible,size);
  cout << "The sum of the multiples of three in your list is: " << sum << endl;
}
