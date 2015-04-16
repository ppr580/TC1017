#include <iostream>
using namespace std;

int triangles (int size, char T){
	cout << " " << endl;
	cout << " " << endl;
	for (int i=1; i<size; i++){
	for (int j=0; j<i; j++){
	cout << T;}
	cout << " " << endl;}
	
	for (int i= size; i>0; i--){
	for (int j=i; j>0; j--){
	cout << T;}
	cout << " " << endl;}
	return 0;
	}
	
int main (){
	int size;
	cout << "Enter the size of the triangle." << endl;
	cin >> size;
	triangles(size, 'T');
}
