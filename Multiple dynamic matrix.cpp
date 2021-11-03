//multiple_matrix
void multiple_matrix()
{
	//Number of rows and columns in first matirx
	int rows1;
	int cols1;
	//THE NUMBER OF COLUMNS IN THE FIRST MATRIX MUST BE EQUAL TO THE NUMBER
	//OF ROWS INT THE SECOND MATRIX
	cout << "Enter 1-matrix rows number: ";
	cin >> rows1;
	cout << "Enter 1-matrix cols number: ";
	cin >> cols1;
	//Create pointer's array
	int** arr1 = new int* [rows1];
	for (int i = 0; i < rows1; i++)
	{
		//Create to each pointer new pointer's array
		arr1[i] = new int[cols1];
	}
	//Number of rows and columns in second matirx
	int rows2;
	int cols2;
	cout << "Enter 2-matrix rows number: ";
	cin >> rows2;
	cout << "Enter 2-matrix cols number: ";
	cin >> cols2;
	//Create pointer's array
	int** arr2 = new int* [rows2];
	for (int i = 0; i < rows2; i++)
	{
		//Create to each pointer new pointer's array
		arr2[i] = new int[cols2];
	}
	//Number of rows and columns in third result matirx
	int rows3 = rows1;
	int cols3 = cols2;
	//Create pointer's array
	int** arr3 = new int* [rows3];
	for (int i = 0; i < rows3; i++)
	{
		//Create to each pointer new pointer's array
		arr3[i] = new int[cols3];
	}
	for (int i = 0; i < rows3; i++)
	{
		for (int j = 0; j < cols3; j++)
		{
			//Set third matrix values to zero because we summaries multiples in this variable
			arr3[i][j] = 0;
		}
	}
	cout << "Enter first matrix: ";
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < cols1; j++)
		{
			cin >> arr1[i][j];
		}
	}
	cout << "Enter second matrix: ";
	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < cols2; j++)
		{
			cin >> arr2[i][j];
		}
	}
	for (int k = 0; k < rows3; k++)
	{
		for (int n = 0; n < cols3; n++)
		{
			for (int j = 0; (j < rows2); j++)
			{
				//Multiples first matrix rows elements to second columns elements and summaries them
				arr3[k][n] += (arr1[k][j] * arr2[j][n]);
			}
		}
	}
	for (int i = 0; i < rows3; i++)
	{
		for (int j = 0; j < cols3; j++)
		{
			//write our result matrix
			cout << arr3[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i << rows1; i++)
	{
		//delete array pointer's pointer to free memory
		delete[] arr1[i];
	}
	//delete array pointer
	delete[]arr1;
	for (int i = 0; i << rows2; i++)
	{
		//delete array pointer's pointer to free memory
		delete[] arr2[i];
	}
	//delete array pointer
	delete[]arr2;
	for (int i = 0; i << rows3; i++)
	{
		delete[] arr3[i];
	}
	//delete array pointer
	delete[]arr3;
}

