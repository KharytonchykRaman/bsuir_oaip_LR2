#include <iostream>

using namespace std;

int main() {
	double x;

	cout << "Input double x: ";
	cin >> x;

	double t = 23 * x * x; // 1 2
	double c = t * 3 + 8; // 3 4
	double d = x * (t + 32); // 5 6
	double a = c + d; // 7
	double b = c - d; // 8

	cout << "\n23 * " << x << "^3 + 69 * " << x << "^2 + 32 * " << x << " + 8 = " << a;
	cout << "\n-23 * " << x << "^3 + 69 * " << x << "^2 - 32 * " << x << " + 8 = " << b;

	return 0;
}