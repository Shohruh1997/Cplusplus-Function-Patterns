//This programm input number by golden ratio
#include<iostream>
using namespace std;
int main()
{
	//Create variables to include matrix parameters
	int n, m;
	cout << "Enter amount of columns: ";
	cin >> n;
	cout << "Enter amount of rows: ";
	cin >> m;
	//Create pointers array
	int** arr = new int* [m];
	for (size_t q = 0; q < m; q++)
	{
		//Create new array to each pointer array member
		arr[q] = new int[n];
	}
	//set beginner parameters to our matrix bounders
	int a0 = -1, b0 = -1, a1 = n, b1 = m;
	int i = 0, j = 0, sw;
	for (size_t k = 1; k <= n * m; )
	{
		/*at the begining it write from left to rightand after gets right limit
		goes down and decrease to one first row
		 For examle matrix 4x5
		* 1 2 3 4
		* * * * 5
		* * * * 6
		* * * * 7
		* * * * 8
		*/
		if (i == a0 + 1 && j == b0 + 1)
			sw = 1;
		/*After reaching end of column it goes from right to left
		* 1  2  3 4
		* *  *  * 5
		* *  *  * 6
		* *  *  * 7
		* 11 10 9 8
		* for each step matrix bounders decrease to one row and column
		*/
		if (i == a1 - 1 && j == b0 + 1)
			sw = 2;
		if (i == a1 - 1 && j == b1 - 1)
			sw = 3;
		if (i == a0 + 1 && j == b1 - 1)
			sw = 4;
		switch (sw)
		{
		case 1:
			for (; i < a1; ++i)
			{
				arr[j][i] = k;
				k++;
			}
			i--,j++,b0++;
			break;
		case 2:
			for (; j < b1; j++)
			{
				arr[j][i] = k;
				k++;
			}
			j--,i--,a1--;
			break;
		case 3:
			for (; i > a0; i--)
			{
				arr[j][i] = k;
				k++;
			}
			i++,j--, b1--;
			break;
		case 4:
			for (; j > b0; j--)
			{
				arr[j][i] = k;
				k++;
			}
			j++,i++,a0++;
			break;
		default:
			break;
		}
	}
	//At the end it writes down each matrix's member with \t
	//because number as 100 gets more space than 3
	for (size_t t = 0; t < m; t++)
	{
		for (size_t u = 0; u < n; u++)
		{
			cout << "\t" << arr[t][u];
		}
		cout << "\n";
	}
	for (size_t q = 0; q < m; q++)
	{
		delete[] arr[q];
	}
	delete[] arr;
}
