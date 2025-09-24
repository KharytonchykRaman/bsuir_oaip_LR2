#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, p,k,D,C;
	cout << "Enter x, p, k, D, C: ";
	cin >> x >> p >> k >> D >> C;

	double B = exp(k);
	double A = x + sin(p);

	cout << "Y = " << 1 + ((k * k) / (2 * A * B)) - B + D * C;

	return 0;
}