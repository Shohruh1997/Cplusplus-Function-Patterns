//House
//Prints house with entered parameters
void House(int g, int n)
{
	int d, v;
	char a = ' ';
	d = 105 - g;
	for (int e = 0; e < 106; e++)
	{
		cout << a;
	}
	//It draws House with A letter
	cout << "A" << endl;
	for (int c = 105; c > d; c--)
	{
		for (int b = 0; b < c; b++)
		{
			cout << a;
		}
		cout << "A";
		v = (106 - c) * 4;
		for (int f = 1; f < v; f += 2)
		{
			cout << a;
		}
		cout << "A" << endl;
	}
	for (int r = 0; r < d; r++)
	{
		cout << a;
	}
	for (int t = 0; t < ((2 * (g + 1)) + 2); t++)
	{
		cout << "A";
	}
	cout << endl;
	for (int m = 0; m < n; m++)
	{
		for (int k = 0; k < d; k++)
		{
			cout << a;
		}
		cout << "A";
		for (int l = 0; l < ((2 * (g + 1)) + 1); l++)
		{
			cout << a;
		}
		cout << "A" << endl;
	}
	for (int k = 0; k < d; k++)
	{
		cout << a;
	}
	for (int p = 0; p < ((2 * (g + 1)) + 2); p++)
	{
		cout << "A";
	}
	cout << endl;
}


int main()
{
	int g, n;
	cout << "Enter High: ";
	cin >> g;
	cout << "Enter High of quadro: ";
	cin >> n;
	House(g, n);
	return 0;
}
