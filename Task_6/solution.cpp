#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, p, z, K, C, D;
	cout << "Enter x, p, z, K, C, D: ";
	cin >> x >> p >> z >> K >> C >> D;

	double A = sin(x) - z;
	double B = abs(p - x);

	cout << "Y = " << pow(A + B, 2) - K / C / D;

	return 0;
}