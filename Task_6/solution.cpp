#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, D;
	cout << "Enter x, D: ";
	cin >> x >> D;

	double b = x + D;
	double A = D * x / b;

	cout << "S = " << (A * A + b * cos(x)) / (pow(D, 3) + A + D - b);

	return 0;
}