#include <iostream>
//Convert from Farenheit to Celsius and say if water will boil
using namespace std;
int main ()
{
	float c;
	float f;
	cout << "Enter the quantity in Farenheit to convert" << endl;
	cin >> f;
	c= (f - 32)*5/9;
	cout << f << " degrees Fahrenheit are " << c << " degrees Celsius " << endl;
	if (f>=212)
	
		cout << "Water at this temperature would boil." << endl;
	else
		cout << "Water at this temperature would NOT boil." << endl;
	return 0;
}
