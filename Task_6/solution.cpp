#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double h, x, p, K, C, D;
	cout << "Enter h, x, p, K, C, D: ";
	cin >> h >> x >> p >> K >> C >> D;

	double A = x - p;
	double B = log(h);

	cout << "Y = " << 0.78 * B + pow(A, 3) / K / C / D;

	return 0;
}