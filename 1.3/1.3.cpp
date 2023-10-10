#include <iostream>

using namespace std;

int main()
{
	int Value;
	float Rate;
	float Convert;

	cout << "Enter current rate" << endl;
	cin >> Rate;
	cout << "Enter your value for to convert in $" << endl;
	cin >> Value;
	Convert = Value / Rate;
	cout << Value << " rubles = " << Convert << "$" << endl;


	return 0;
}