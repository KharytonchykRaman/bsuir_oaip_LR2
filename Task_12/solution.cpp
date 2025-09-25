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

    if (a == 0.0) {
        if (b == 0.0) {
            if (c == 0.0) {
                cout << "Infinite solutions\n";
            }
            else {
                cout << "No solutions\n";
            }
        }
        else {
            //b*x^2 + c = 0  =>  x^2 = -c/b
            double t = -c / b;
            if (t < 0) {
                std::cout << "No real solutions\n";
            }
            else if (t == 0) {
                std::cout << "x = 0\n";
            }
            else {
                double root = my_sqrt(t);
                std::cout << "x1 = " << -root << "\n";
                std::cout << "x2 = " << root << "\n";
            }
        }
        return 0;
    }

    // a*x^4 + b*x^2 + c = 0
    // t = x^2 => a*t^2 + b*t + c = 0
    double D = b * b - 4 * a * c;

    if (D < 0) {
        std::cout << "No real solutions\n";
        return 0;
    }

    double sqrtD = my_sqrt(D);
    double t1 = (-b + sqrtD) / (2 * a);
    double t2 = (-b - sqrtD) / (2 * a);

    bool found = false;

    if (t1 > 0) {
        double x = my_sqrt(t1);
        std::cout << "x1 = " << -x << "\n";
        std::cout << "x2 = " << x << "\n";
        found = true;
    }
    else if (t1 == 0) {
        std::cout << "x = 0\n";
        found = true;
    }

    if (D > 0) {
        if (t2 > 0) {
            double x = my_sqrt(t2);
            std::cout << "x3 = " << -x << "\n";
            std::cout << "x4 = " << x << "\n";
            found = true;
        }
        else if (t2 == 0) {
            if (t1 != 0) {
                std::cout << "x = 0\n";
                found = true;
            }
        }
    }

    if (!found) {
        std::cout << "No real solutions\n";
    }

    return 0;
}