#include <iostream>

using namespace std;

int main() {
	double b1;

	cout << "Input the first member of a geometric progression: ";
	cin >> b1;

	int n = 28;
	double q = 1.0 / (n + 1);

	cout << "The sum of all terms of a decreasing geometric progression = " << b1 / (1 - q);

	return 0;
}