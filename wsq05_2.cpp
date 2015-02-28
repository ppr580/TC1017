#include <iostream>
//Convert Celsius to Farenheit and say if water will boil
using namespace std;
int main()
{
	float f;
	float c;
	cout << "Enter the quantity in celsius to convert" << endl;
	cin >> c;
	f= ((9*c)/5)+(32);
	cout << c << " degrees Celsius are " << f << " degrees Farenheit" << endl;
	if (f>=212)
		cout << "At this temperature, water would boil"<< endl;
	else
		cout << "At this temperature, water would not boil" << endl;
	return 0;
}
