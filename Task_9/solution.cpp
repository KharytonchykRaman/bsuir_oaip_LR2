#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double z, n, m, k;
	cout << "Enter z, n, m, k: ";
	cin >> z >> n >> m >> k;

	int choose;
	cout << "Choose f(x) :\n1. 2x\n2. x^3\n3. x/3";
	cin >> choose;

	double result, x;
	
	switch (choose) {
	case 1:
		x = z > 1 ? z : z * z + 1;
		result = sin(n * 2 * x) + cos(k * x) + log(m * x);
		cout << "Your result " << result;
		break;
	case 2:
		x = z > 1 ? z : z * z + 1;
		result = sin(n * x * x * x) + cos(k * x) + log(m * x);
		cout << "Your result " << result;
		break;
	case 3:
		x = z > 1 ? z : z * z + 1;
		result = sin(n * x / 3) + cos(k * x) + log(m * x);
		cout << "Your result " << result;
		break;
	default:
		cout << "error : incorrect input";
	}

	return 0;
}