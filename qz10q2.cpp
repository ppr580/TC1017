#include <iostream>
#include <vector>
using namespace std;

int dotProduct (vector <int> v1, vector <int> v2, int size){
  int product;
  int prodtemp;
  int sumtemp;
  for (int i=0; i<size; i++){
    prodtemp = v1[i]*v2[i];
    sumtemp = prodtemp + sumtemp;
  }
  return sumtemp;
}

int main(){
  int size;
  int sumtemp;
  cout << "Enter the size of the vectors to multiply." << endl;
  cin >> size;
  vector <int> v1(size);
  vector <int> v2(size);
  cout << "Enter the values for vector 1" << endl;
  for(int i=0; i<size;i++){
    cin >> v1[i];
  }
  cout << "Enter the values for vector 2" << endl;
  for(int i=0; i<size; i++){
    cin >> v2[i];
  }
  sumtemp = dotProduct(v1,v2,size);
  cout << "The dot product of these two vectors is: " << sumtemp << endl;
}
