#include <iostream>

using namespace std;

int main() {
	double x, y, z;

	cout << "Input double x: ";
	cin >> x;
	cout << "Input double y: ";
	cin >> y;
	cout << "Input double z: ";
	cin >> z;

	if (x + y > z && y + z > x && z + x > y) {
		cout << x << " " << y << " " << z << " can make triangle";
	}
	else cout << x << " " << y << " " << z << " can't make triangle";

	return 0;
}