#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double n, m, x, K;
	cout << "Enter n, m, x, K: ";
	cin >> n >> m >> x >> K;

	double A = abs(n + m);
	double D = tan(x);

	cout << "Y = " << 1.29 + K / A + D * D;

	return 0;
}