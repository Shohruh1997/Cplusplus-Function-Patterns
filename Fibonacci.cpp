//Function summaries and finds Fibanacci Number
void Fibanacci(int limit)
{
	int a = 0, b = 1, c = 0;
	cout << "d = " << a << endl;
	do
	{
		b += a;
		a = c;
		c = b;
		cout << "Limit = " << b << endl;
	} while (b < (--limit));
}
int main()
{
	int  limit;
	cout << "Enter limit: ";
	cin >> limit;
	Fibanacci(limit);
	return 0;
}
