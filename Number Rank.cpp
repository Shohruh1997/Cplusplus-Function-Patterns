//Function shows separately number's rank
/*Example 357575 output
3
5
7
5
7
5
*/
void razryad(int a);
int main()
{
	int a, b, c, d, f, g;
	cout << "Enter number: " << endl;
	cin >> a;
	razryad(a);
	return 0;
}
void razryad(int a)
{
	int b, c, d, f, g;
	b = (a - (a % 10000)) / 10000;
	cout << "first number = " << b << endl;
	c = (a - (a % 1000) - (a - (a % 10000))) / 1000;
	cout << "second number = " << c << endl;
	d = (a - (a - (a % 10000)) - (a - (a % 1000) - (a - (a % 10000))) - (a % 100)) / 100;
	cout << "third number = " << d << endl;
	f = (a - (a - (a % 10000)) - (a - (a % 1000) - (a - (a % 10000))) - (a - (a - (a % 10000)) - (a - (a % 1000) - (a - (a % 10000))) - (a % 100)) - (a % 10)) / 10;
	cout << "fourth number = " << f << endl;
	g = (a - (a - (a % 10000)) - (a - (a % 1000) - (a - (a % 10000))) - (a - (a - (a % 10000)) - (a - (a % 1000) - (a - (a % 10000))) - (a % 100)) - (a - (a - (a % 10000)) - (a - (a % 1000) - (a - (a % 10000))) - (a - (a - (a % 10000)) - (a - (a % 1000) - (a - (a % 10000))) - (a % 100)) - (a % 10)));
	cout << "last number = " << g << endl;

}
