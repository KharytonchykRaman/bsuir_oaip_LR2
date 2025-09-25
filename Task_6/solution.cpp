#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double z, x, k, C, D;
	cout << "Enter z, x, k, C, D: ";
	cin >> z >> x >> k >> C >> D;

	double A = log(x) - k;
	double B = sqrt(z);

	cout << "Y = " << D * D + C * C / 0.75 / A + B;

	return 0;
}