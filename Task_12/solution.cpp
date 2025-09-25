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
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0.0 && b == 0.0 && c == 0.0) {
        cout << "Infinite number of solutions\n";
        return 0;
    }

    bool found = false;

    if (a == 0.0) {
        // x*(b x^2 + c x + b) = 0
        cout << "x = 0\n";
        found = true;

        if (b == 0.0) {
            // x^2 = 0
        }
        else {
            // b x^2 + c x + b = 0
            double D = c * c - 4 * b * b;
            if (D >= 0) {
                double sqrtD = my_sqrt(D);
                double x1 = (-c + sqrtD) / (2 * b);
                double x2 = (-c - sqrtD) / (2 * b);
                cout << "x = " << x1 << "\n";
                if (D > 0) {
                    cout << "x = " << x2 << "\n";
                }
                found = true;
            }
        }
    }
    else {
        // a != 0
        double A = a;
        double B = b;
        double C = c - 2 * a;

        double D_t = B * B - 4 * A * C;

        if (D_t < 0) {
            cout << "No real solutions\n";
            return 0;
        }

        double sqrtD_t = my_sqrt(D_t);
        double t1 = (-B + sqrtD_t) / (2 * A);
        double t2 = (-B - sqrtD_t) / (2 * A);

        auto solve_for_t = [&](double t) {
            double D_x = t * t - 4;
            if (D_x < 0) {
                return;
            }
            double sqrtD_x = my_sqrt(D_x);
            double x1 = (t + sqrtD_x) / 2;
            double x2 = (t - sqrtD_x) / 2;
            cout << "x = " << x1 << "\n";
            if (D_x > 0) {
                cout << "x = " << x2 << "\n";
            }
            found = true;
            };

        solve_for_t(t1);
        if (D_t > 0) {
            solve_for_t(t2);
        }
    }

    if (!found) {
        cout << "No real solutions\n";
    }

    return 0;
}