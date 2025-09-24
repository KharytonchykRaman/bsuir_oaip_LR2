#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    // 1st option
    bool condition = x > y;
    double max1 = condition ? x : y;

    //2nd option
    double max2 = (x > y) ? x : y;

    cout << "Max (with bool var): " << max1 << endl;
    cout << "Max (without bool var): " << max2 << endl;

    return 0;
}