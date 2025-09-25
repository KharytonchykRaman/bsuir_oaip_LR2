#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double n, p, x, D, K;
	cout << "Enter n, p, x, D, K: ";
	cin >> n >> p >> x >> D >> K;

	double C = p - n;
	double B = cos(x);

	cout << "Q = " << B * B / K / D + B * pow(C, 3);

	return 0;
}