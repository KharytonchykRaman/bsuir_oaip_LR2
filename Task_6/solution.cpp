#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, y, C, K;
	cout << "Enter x, y, C, K: ";
	cin >> x >> y >> C >> K;

	double A = x + y;
	double D = abs(C - A);

	cout << "S = " << 10.1 + A / C + D / K / K;

	return 0;
}