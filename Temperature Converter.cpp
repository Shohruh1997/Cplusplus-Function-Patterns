//Temperature Converter
void temperature(int a);
int main()
{
	int a;
	float C, F, K;
	//Here are three main temperature measure Celsius, Fahrenheit and Kelvin
	//User choose from what convert
	cout << "Choose Temperature's measurement" << endl
		<< "1. Celsius" << endl
		<< "2. Fahrenheit" << endl
		<< "3. Kelvin" << endl;
	cin >> a;
	//Answer will be given in all measure
	temperature(a);
	return 0;

}
void temperature(int a)
{
	float C, F, K;
	//Use switch to choose between three measure and use suitable formules
	switch (a)
	{
	case 1:
		cout << "Write in Celsius = ";
		cin >> C;
		F = C * 1.8 + 32;
		cout << "Fahrenheit = " << F << endl;
		K = C + 273.15;
		cout << "Kelvin = " << K << endl;
		break;
	case 2:
		cout << "Write in Fahrenheit = ";
		cin >> F;
		C = (F - 32) * 0.55559;
		cout << "Celsius = " << C << endl;
		K = (F - 32) * 0.5559 + 273.15;
		cout << "Kelvin = " << K << endl;
		break;

	case 3:
		cout << "Write in Kelvin = ";
		cin >> K;
		F = (K - 273.15) * 1.8 + 32;
		cout << "Fahrenheit = " << F << endl;
		C = K - 273.15;
		cout << "Celsius = " << C << endl;
		break;
	default:
		cout << "invalid key" << endl;
		break;
	}
}
