//THis function finds The Least Common Multiple of two number
void NOK(int c)
{
	const int Size1 = 20;
	const int Size2 = 40;
	int a, b;
	cout << "Enter biggest number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	int answers1[Size1] = {};
	int answers2[Size1] = {};
	int answers3[Size2] = {};
	{
		int  i = 0;
		int j = 2;
		while (a != 1)
		{
			if (a % j == 0)
			{
				a = a / j;
				answers1[i] = j;
				i++;
			}
			else
			{
				j++;
			}
		}
	}
	{
		int  j = 0;
		int i = 2;
		while (b != 1)
		{
			if (b % i == 0)
			{
				b = b / i;
				answers2[j] = i;
				j++;
			}
			else
			{
				i++;
			}
		}
	}
	for (int i = 0; i < Size1; i++)
	{
		answers3[i] = answers1[i];
	}
	bool q = true;
	for (int i = 0; i < Size1; i++)
	{
		for (int j = 0; j < Size1; j++)
		{
			if (answers1[i] == answers2[j])
			{
				answers2[j] = 0;
				i++;
			}
		}
	}
	for (int i = 0, j = 20; i < Size2, j>0; i++, j--)
	{
		if (answers2[i] != 0)
		{
			answers3[j] = answers2[i];

		}
	}
	for (int l = 0; l < 20; l++)
	{
		if (answers3[l] != 0)
		{
			c *= answers3[l];
		}
	}
	cout << "NOK: " << c << endl;
}
int main()
{
	int c = 1;
	NOK(c);
}
