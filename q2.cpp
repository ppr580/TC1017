#include <iostream>
using namespace std;
int triangles1(int numeroT, char T){
  for(int i=0; i < numeroT; i++){
    for(int j = 0; j < i+1; j++){
      cout<<T;
    }
    cout << endl;
  }
  return 0;
}
int triangles2(int numeroT, char T){

  for(int i=numeroT-1; i > 0; i--){
    for(int j = i; j > 0; j--){
      cout<<T;
    }
    cout << endl;
  }
  return 0;
}
int main (){
  int spaces, i;
  cout << "Enter the height of a triangle" << endl;
  cin >> spaces;
  cout<< endl;
  triangles1(spaces,'T');
  triangles2(spaces, 'T');
}
