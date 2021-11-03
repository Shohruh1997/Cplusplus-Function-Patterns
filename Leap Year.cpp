//LeapYear
//Finds is input year Leap or Not
void LeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "This year is Leap year\n";
			}
			else
			{
				cout << "This year is NOT  year\n";
			}
		}
		else
			cout << "This year is NOT Leap year\n";
	}
	else
		cout << "This year is NOT Leap year\n";
}
int main()
{
	int year;
	cout << "Enter year: ";
	cin >> year;
	LeapYear(year);
	return 0;
}
