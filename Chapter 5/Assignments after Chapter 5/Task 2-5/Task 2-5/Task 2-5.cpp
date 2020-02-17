#include <iostream>

using namespace std;

double ctok(double c) {

	double k = c + 273.15;
	if (k <= 0)
		cout << "Error";
	else
		cout << "Kelvin - " << k << endl;
	return k;
}

double Cel(double c) {

	double k = c - 273.15;
	cout << "Celsius - " << k;
	return 0;
}

int main() {

	double c = 0;
	cin >> c;
	double k = ctok(c);
	Cel(k);
}
