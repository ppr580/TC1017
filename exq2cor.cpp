// Hector Islas Leon - A01064727
#include <iostream>
using namespace std;
long superpower (long a, long b, long temp){
	long power;
	for (long i=1; i<b; i++){
		a = temp*a;
		power = a;
	}
	return power;
}
int main (){
	long a,b;
	cout << "Enter the number you want to elevate" << endl;
	cin >> a;
	long temp = a;
	cout << "To what power would you like to do so?" << endl;
	cin >> b;
	long answer = superpower(a,b,temp);
	cout << "the answer is " << answer << endl;
}
