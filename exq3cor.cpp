// Hector Islas Leon - A01064727
#include <iostream>
using namespace std;
long fibonacci(long a, long b, long temp){
	a = 1;
	temp=0;
	if(b==0){
		cout << "The 0th number of the fibonnacci series is 0" << endl;
	}
	else{
		if(b==1){
		cout << "The 1st number of the fibonacci series is 1" << endl;}
		else {
			for (int i=0; i<b; i++){
			temp = temp+a;
			a=temp-a;}
			cout << "The " << b << "th number of the fibonacci series is " << temp << endl;
		}
		return temp;
	}
}
int main (){
	long a, b, temp;
	long temp2=temp+a;
	cout << "Enter the number of the fibonacci series you want" << endl;
	cin >> b;
	fibonacci(a, b, temp);
}
