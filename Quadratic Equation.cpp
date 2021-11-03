//QUadratic Equation
//this Programm solves quadratic equation
void squarexp(int a, int b, int c)
{
	float x1, x2, D;
	//Finds Determinant
	D = b * b - 4 * a * c;
	cout << D << endl;
	//if D<0 eqation has not answer
	//if D=0 equation has one answer
	//if D>0 equation has two answer
	if (D < 0)
	{
		cout << "Answer unknown" << endl;
	}
	if (D == 0)
	{
		x1 = -b / 2 * a;
		cout << "x1, x2 = " << x1 << endl;
	}
	if (!(D == 0))
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1 = " << x1
			<< "\tx2 = " << x2 << endl;
	}
}
int main()
{
	float a, b, c;
	float& aRef = a, & bRef = b, & cRef = c;
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	cout << "Enter c:";
	cin >> c;
	squarexp(aRef, bRef, cRef);
	return 0;

}
