#include <iostream>

using namespace std;

double my_sqrt(double x) {
    if (x <= 0.0) return 0.0;
    double guess = x;
    for (int i = 0; i < 50; ++i) {
        guess = (guess + x / guess) / 2.0;
    }
    return guess;
}

int main() {
    double x1, y1, r;
    double x2, y2, R;

    cout << "Input x1 y1 r of the 1st circle: ";
    cin >> x1 >> y1 >> r;
    cout << "Input x2 y2 R of the 2nd circle: ";
    cin >> x2 >> y2 >> R;

    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = my_sqrt(dx * dx + dy * dy);

    if (distance + r <= R) {
        cout << "Yes\n";
    }
    else if (distance + R <= r) {
        cout << "Yes, but the opposite is also true for the two figures\n";
    }
    else if (distance < r + R) {
        std::cout << "Figures intersect\n";
    }
    else {
        std::cout << "None of the conditions are met\n";
    }

    return 0;
}