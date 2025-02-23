#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    return b == 0 ? a : findGCD(b, a % b);
}

int main() {
    int num1, den1, num2, den2;
    
    cout << "Enter first fraction (num/den): ";
    cin >> num1 >> den1;
    
    cout << "Enter second fraction (num/den): ";
    cin >> num2 >> den2;

    int lcm = (den1 * den2) / findGCD(den1, den2);
    int sum = (num1 * (lcm / den1)) + (num2 * (lcm / den2));
    int gcd = findGCD(sum, lcm);

    cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 << " = " 
         << sum / gcd << "/" << lcm / gcd;

    return 0;
}
