//Creates array with random numbers and finds the Biggest one
void RandomBigger(int array[], const int Size = 10)
{
	int a, b = 0;
	//Boolen to check is new random number array or not
	bool alreadyHere;
	for (int i = 0; i < Size; )
	{
		alreadyHere = false;
		//creates new random number
		int NewR = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (array[j] == NewR)
			{
				alreadyHere = true;
				break;
			}
		}
		//IF this new random number is not in array than it is added to array
		if (!alreadyHere)
		{
			array[i] = NewR;
			i++;
		}
	}
	for (int t = 0; t < Size; t++)
	{
		a = t + 1;
		//Searchs array to the biggest number
		if (array[t] < array[a])
			b = array[a];
		cout << array[t] << endl;
	}
	cout << "\nBiggest number: " << b << endl;
}
int main()
{
	//Function sets timer to NULL to get REAL random numbers without repeating
	srand(time(NULL));
	const int Size = 10;
	int array[Size];
	RandomBigger(array, Size);
	return 0;
};
