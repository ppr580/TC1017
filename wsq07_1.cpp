#include <iostream>
using namespace std;
//Make a sumatory of a range of numbers by using a loop
int main()
{
	int n1;
	int x;
	int n2;
	int sum = 0;
	cout << "Enter the lower limit for the sumatory" << endl;
	cin >> n1;
	x = n1;
	cout << "Enter the upper limit for the sumatory" << endl;
	cin >> n2;
	for (int x = n1 ; x<= n2; x++)
	{
		sum += x;
	}
	cout << "The sumatory of the given range of numbers is " << sum << endl;
}
