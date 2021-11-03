#include <iostream>
using namespace std;
//Function fins is entered number polindron or not
void Polindrom(int number)
{
	int poli, newN, newN1 = 0;
	poli = number;
	do
	{

		newN = poli % 10;
		newN1 = newN1 * 10 + newN;
		poli /= 10;
	} while (poli != 0);
	if (number == newN1)
	{
		cout << "Number is Polindrom" << endl;
	}
	else
		cout << "Number is NOT Polindrom" << endl;
}
int main()
{
	int number;
	cout << "Enter number: ";
	cin >> number;
	Polindrom(number);
	return 0;
}
