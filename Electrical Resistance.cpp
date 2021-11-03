//Resistance
//Calculate Electrical Resistance depend on connection type
void Resistance(float Res[], const int Amount)
{
	float a = 1, Ares = 0, q = 0, w = 0;
	int i = 1, b;
	for (; !(a == 0);)
	{
		cout << "Enter " << i << " resistance: ";
		cout << "If it is last write 0" << endl;
		cin >> a;
		Res[i] = a;
		i++;
	}
	cout << "Choose type of junction:\n" <<
		"1. Parallel:\n" <<
		"2. Consequencely:\n";
	cin >> b;
	switch (b)
	{
	case 1:
	{
		for (int k = 0; k < Amount; k++)
		{
			if (Res[k] != 0)
			{
				q = (1 / Res[k]);
				w += q;
			}
		}
		Ares = 1 / w;
		cout << "Resistance: " << Ares << endl;
		break;
	}
	case 2:
	{
		for (int z = 0; z < Amount; z++)
		{
			if (Res[z] != 0)
			{
				Ares += Res[z];
			}
		}
		cout << "Resistance: " << Ares << endl;
	}
	default:
	{
		cout << "You chose incorrest, try one more " << endl;
		break;
	}
	}
}
void main()
{
	const int Amount = 30;
	float Res[Amount]{};
	Resistance(Res, Amount);
}
