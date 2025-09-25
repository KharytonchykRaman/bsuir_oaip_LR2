#include <iostream>

using namespace std;

int main() {
	int h1, min1, h2, min2;
	cout << "Input h1 min1 and h2 min2: ";
	cin >> h1 >> min1 >> h2 >> min2;

	int start_minutes = h1 * 60 + min1;
	int end_minutes = h2 * 60 + min2;

	if (end_minutes < start_minutes) {
		end_minutes += 24 * 60;
	}

	int total_minutes = end_minutes - start_minutes;
	int hours = total_minutes / 60;
	int minutes = total_minutes % 60;

	if (hours)
	{
		cout << hours << "h " << minutes << "m";
	}
	else cout << minutes << "m";

	return 0;
}