#include <iostream>
#include <cmath>
using namespace std;

void findRoots(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2 * a);
        double r2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots: " << r1 << " and " << r2 << endl;
    } else if (d == 0) {
        double r = -b / (2 * a);
        cout << "Root: " << r << endl;
    } else {
        double real = -b / (2 * a);
        double imag = sqrt(-d) / (2 * a);
        cout << "Roots: " << real << " + " << imag << "i and " << real << " - " << imag << "i" << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    findRoots(a, b, c);
    return 0;
}
