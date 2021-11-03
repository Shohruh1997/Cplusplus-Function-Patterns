//Sorts Array by increasing
void sortifyMassive(int array[], int newone[], int const Size)
{
	int a = 0;
	cout << "Enter " << Size << " numbers: ";
	for (int i = 0; i < Size; i++)
	{
		cin >> array[i];
	}
	for (int k = 0; k < Size;)
	{
		for (int i = 0, j = 0; i < Size, j < Size;)
		{
			if (array[i] >= array[j])
			{
				a = array[i];
				j++;
			}
			else
			{
				a = array[j];
				i++;
			}
			if (j == Size)
			{
				array[i] = 0;
				break;
			}
			if (i == Size)
			{
				array[j] = 0;
				break;
			}
		}
		newone[k] = a;
		k++;
	}
	for (int i = 0; i < Size; i++)
	{
		cout << "New numbers: " << newone[i] << endl;
	}
}
void main()
{
	const int Size = 10;
	int array[Size], newone[Size];
	sortifyMassive(array, newone, Size);
}
