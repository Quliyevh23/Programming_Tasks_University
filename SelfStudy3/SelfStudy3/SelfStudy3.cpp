#include <iostream>
using namespace std;

int EBOB(int a, int b) {

	while (a != b) {

		if (a > b)
			a -= b;

		else
			b -= a;
	}
	return a;
}

int EKOB(int a, int b) {

	int gcd = 0;

	for (int i = 1; i <= a && i <= b; i++) {

		if (a % i == 0 && b % i == 0)
			gcd = i;

	}
	return (a * b) / gcd;
}

int main() {
	int num1, num2;
	cout << "1-ci ededi daxil edin: \n"; cin >> num1;
	cout << "2-ci ededi daxil edin: \n"; cin >> num2;

	cout << "EBOB = " << EBOB(num1, num2) << endl;
	cout << "EKOB = " << EKOB(num1, num2) << endl;
}
