#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double z, y, x, D, K, C;
	cout << "Enter z, y, x, D, K, C: ";
	cin >> z >> y >> x >> D >> K >> C;

	double A = x - y;
	double B = sqrt(z);

	cout << "T = " << cos(x) + A * A / (K - C * D) - B;

	return 0;
}