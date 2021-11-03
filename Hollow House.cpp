//Draws hollow House
void HollowHouse(int L, int H)
{
	int e, r, q;
	for (r = 0; r < L; r++)
	{
		for (q = 0; q < r; q++)
		{
			cout << "*";
		}
		cout << "*" << endl;
	}
	for (int i = 0; i < H;)
	{

		for (int j = 0; j < L; j++)
		{
			cout << "*";
		}
		cout << "*" << endl;
		i++;
	}
}
int main()
{

	int H, L;
	cout << "Enter Length: ";
	cin >> L;
	cout << "Enter High: ";
	cin >> H;
	HollowHouse(L, H);
	return 0;
}
