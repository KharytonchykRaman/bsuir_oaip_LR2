#include <iostream>

using namespace std;

int main() {
	int x, y;
	double a, b, c, k;

	cout << "Input int x: ";
	cin >> x;
	cout << "Input int y: ";
	cin >> y;
	cout << "Input double a: ";
	cin >> a;
	cout << "Input double b: ";
	cin >> b;
	cout << "Input double c: ";
	cin >> c;
	cout << "Input double k: ";
	cin >> k;

	if (x < y) {
		x = 0;
	}
	else if (x == y) {
		x = 0;
		y = 0;
	}
	else y = 0;

	if (a > b && a > c) {
		a -= k;
	}
	else if (b > a && b > c) {
		b -= k;
	}
	else c -= k;

	cout << "x = " << x << "\ny = " << y << "\na = " << a << "\nb = " << b << "\nc = " << c;

	return 0;
}