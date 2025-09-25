#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int orig_a = a;
    int orig_b = b;

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    cout << "Initial memory state:\n";
    cout << "a = " << a << ", b = " << b << "\n\n";

    int step = 1;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;

        cout << "Step " << step << ":\n";
        cout << "a = " << a << ", b = " << b << "\n\n";
        step++;
    }

    cout << "GCD of " << orig_a << " and " << orig_b << " is " << a;
    return 0;
}