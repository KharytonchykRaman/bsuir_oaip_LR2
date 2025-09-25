#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

double my_sqrt(double x) {
	if (x <= 0.0) return 0.0;
	double guess = x;
	for (int i = 0; i < 50; ++i) {
		guess = (guess + x / guess) / 2.0;
	}
	return guess;
}

double my_acos(double x) {
	if (x < -1.0) x = -1.0;
	if (x > 1.0) x = 1.0;
	if (x == 1.0) return 0.0;
	if (x == -1.0) return PI;

	double asin_x = 0.0;
	double term = x;
	asin_x += term;
	for (int n = 1; n <= 30; ++n) {
		term *= ((2.0 * n - 1.0) * (2.0 * n)) / ((2.0 * n) * (2.0 * n + 1.0) * 4.0);
		term *= x * x;
		asin_x += term;
	}
	return PI / 2.0 - asin_x;
}

int main() {
	double x1, y1, x2, y2, x3, y3;
	cout << "Enter x1, y1 coords of the 1st vertex:";
	cin >> x1 >> y1;
	cout << "Enter x2, y2 coords of the 1st vertex:";
	cin >> x2 >> y2;
	cout << "Enter x3, y3 coords of the 1st vertex:";
	cin >> x3 >> y3;

	double a = my_sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	double b = my_sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	double c = my_sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	cout << "Triangle sides:\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n\n";

	double cross = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
	double S1 = 0.5 * (cross > 0 ? cross : -cross);

	double p = (a + b + c) / 2.0;
	double S2 = my_sqrt(p * (p - a) * (p - b) * (p - c));

	double cosC = (a * a + b * b - c * c) / (2.0 * a * b);
	double sinC = my_sqrt(1.0 - cosC * cosC);
	double S3 = 0.5 * a * b * sinC;

	double S = S1;

	cout << "Triangle area:\n";
	cout << "Method 1 (vectors): " << S1 << "\n";
	cout << "Method 2 (Heron's formula): " << S2 << "\n";
	cout << "Method 3 (using cos): " << S3 << "\n";

	double perimeter = a + b + c;
	cout << "Triangle perimeter: " << perimeter << "\n\n";

	double ha = (2.0 * S) / a;
	double hb = (2.0 * S) / b;
	double hc = (2.0 * S) / c;
	cout << "Triangle altitudes:\n";
	cout << "ha = " << ha << "\n";
	cout << "hb = " << hb << "\n";
	cout << "hc = " << hc << "\n\n";

	double ma = 0.5 * my_sqrt(2 * b * b + 2 * c * c - a * a);
	double mb = 0.5 * my_sqrt(2 * a * a + 2 * c * c - b * b);
	double mc = 0.5 * my_sqrt(2 * a * a + 2 * b * b - c * c);
	cout << "Triangle medians:\n";
	cout << "ma = " << ma << "\n";
	cout << "mb = " << mb << "\n";
	cout << "mc = " << mc << "\n\n";

	double ba = my_sqrt(b * c * (1.0 - (a * a) / ((b + c) * (b + c))));
	double bb = my_sqrt(a * c * (1.0 - (b * b) / ((a + c) * (a + c))));
	double bc = my_sqrt(a * b * (1.0 - (c * c) / ((a + b) * (a + b))));
	cout << "Triangle bisectors:\n";
	cout << "ba = " << ba << "\n";
	cout << "bb = " << bb << "\n";
	cout << "bc = " << bc << "\n\n";

	double cosA = (b * b + c * c - a * a) / (2.0 * b * c);
	double cosB = (a * a + c * c - b * b) / (2.0 * a * c);
	double cosC_val = (a * a + b * b - c * c) / (2.0 * a * b);

	double A_rad = my_acos(cosA);
	double B_rad = my_acos(cosB);
	double C_rad = my_acos(cosC_val);

	double A_deg = A_rad * 180.0 / PI;
	double B_deg = B_rad * 180.0 / PI;
	double C_deg = C_rad * 180.0 / PI;

	cout << "Triangle angles:\n";
	cout << "Angle A: " << A_rad << " rad, " << A_deg << " deg\n";
	cout << "Angle B: " << B_rad << " rad, " << B_deg << " deg\n";
	cout << "Angle C: " << C_rad << " rad, " << C_deg << " deg\n\n";

	double r = S / p;
	double R = (a * b * c) / (4.0 * S);

	cout << "Inradius: " << r << "\n";
	cout << "Circumradius: " << R << "\n\n";

	double area_inscribed = PI * r * r;
	double area_circumscribed = PI * R * R;
	double len_inscribed = 2.0 * PI * r;
	double len_circumscribed = 2.0 * PI * R;

	cout << "Incircle area: " << area_inscribed << "\n";
	cout << "Incircle circumference: " << len_inscribed << "\n";
	cout << "Circumcircle area: " << area_circumscribed << "\n";
	cout << "Circumcircle circumference: " << len_circumscribed << "\n\n";

	return 0;
}