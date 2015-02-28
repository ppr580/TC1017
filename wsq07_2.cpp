#include <iostream>
using namespace std;
//Use the loop command "while" to solve a sumatory in a given range.
int main()
{
	int x;
	int n1;
	int n2;
	int sum = 0;
	cout << "Please enter the lower limit " << endl;
	cin >> n1;
	cout << "Please enter the upper limit " << endl;
	cin >> n2;
	while (n1<=n2)
	{
		sum += n1;
		n1++;
	}
	cout << "The sumatory for the gievn range is " << sum << endl;
}
