#include <iostream>
//Add, substract, multiply and divide numbers
using namespace std;
int main()
{
	int a;
	int b;
	cout << "Enter a first number " << endl;
	cin >> a;
	cout << "Enter a second number " << endl;
	cin >> b;
	cout << "The sum of these two numbers is " << a+b << endl;
	cout << "The substraction of these two numbers is " << a-b << endl;
	cout << "The product of these two numbers is " << a*b << endl;
	cout << "The quotient between these two numbers is " << a/b << endl;
	cout << "The residue of the previous division is " << a%b << endl;
}
