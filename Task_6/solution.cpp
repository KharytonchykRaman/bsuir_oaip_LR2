#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, d, K, C;
	cout << "Enter x, d, K, C: ";
	cin >> x >> d >> K >> C;

	double A = log(x);
	double B = x + exp(d);

	cout << "Y = " << A + B - C * C / K;

	return 0;
}