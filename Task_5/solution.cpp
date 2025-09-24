#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> x;

    // 1st option
    bool condition = x > y;
    double max1;
    if (condition) {
        max1 = x;
    }
    else {
        max1 = y;
    }

    // 2nd option
    double max2;
    if (x > y) {
        max2 = x;
    }
    else {
        max2 = y;
    }

    cout << "Max (with bool var): " << max1 << endl;
    cout << "Max (without bool var): " << max2 << endl;

    return 0;
}