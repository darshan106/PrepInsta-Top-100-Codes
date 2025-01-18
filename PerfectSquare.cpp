#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0)
        return false;
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPerfectSquare(number)) {
        cout << number << " is a perfect square." << endl;
    } else {
        cout << number << " is not a perfect square." << endl;
    }

    return 0;
}