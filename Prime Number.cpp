//Prime NUmber Function
//This function write all prime numbers betwwen number1 and number2
void ordinNumb(int& number1, int& number2)
{
	int answ;
	bool mention = false;
	for (; number1 <= number2; number1++)
	{
		for (int i = 2; i <= number1; i++)
		{
			answ = number1 % i;
			if (answ == 0)
			{
				mention = false;
				break;
			}
			else
			{
				mention = true;
			}
			if (i == (number1 - 1))
			{
				if (mention == true)
				{
					cout << "Ordinary: " << number1 << endl;
					break;
				}
			}
		}
	}
}
int main()
{
	int number1, number2;
	cout << "Enter number1: ";
	cin >> number1;
	cout << "Enter number2: ";
	cin >> number2;
	ordinNumb(number1, number2);
	return 0;
}
