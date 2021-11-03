//DYNAMICAL MASSIVE INCLUDE ALL FUNCTIONS
//fill array arr with size by random function, numbers less 10
void fillarr(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
//Print array
void showarr(const int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
//Add element to the element next to place variable of array
void push_begin(int*& arr, int& size, const int place, const int value)
{
	int* newarr = new int[size++];

	for (int i = 0, j = 0; (i < size) && (j < (size - 1));)
	{
		if (i == place)
		{
			newarr[i] = value;
			i++;
		}
		else
		{
			newarr[i] = arr[j];
			i++, j++;
		}
	}

	delete[] arr;
	arr = newarr;
}
int main()
{
	int size, place;
	//Set array size
	cout << "Enter massive size: ";
	cin >> size;
	//Enter number of element to add after
	cout << "Where put number: ";
	cin >> place;
	int* arr = new int[size];
	fillarr(arr, size);
	showarr(arr, size);
	push_begin(arr, size, (place - 1), 333);
	cout << "Newarr: " << endl;
	showarr(arr, size);
	//free memory after using
	delete[] arr;
}
