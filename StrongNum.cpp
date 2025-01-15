#include<iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, sum = 0, temp, digit;
    cin >> num;
    temp = num;
    
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}
