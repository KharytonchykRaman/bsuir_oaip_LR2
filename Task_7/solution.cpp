#include <iostream>

using namespace std;

int main() {
	double a, b, t;
	int c, N;
	cout << "Enter a, b, c, N: ";
	cin >> a >> b >> c >> N;

	double result;
	switch (N) {
	case 2:
		result = b * c - a * a;
		break;
	case 56:
		result = b * c;
		break;
	case 7:
		t = a * a * a;
		result = t * t * a + c;
		break;
	case 3:
		result = a - b * c;
		break;
	default:
		result = (a+b)* (a + b)* (a + b);
	}

	cout << "Y = " << result;

	return 0;
}