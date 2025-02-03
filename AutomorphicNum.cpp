#include <iostream>
using namespace std;

bool isAutomorphic(int num) {
    int square = num * num;

    while (num > 0) {
        if (num % 10 != square % 10) {
            return false;
        }
        num /= 10;
        square /= 10;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isAutomorphic(number)) {
        cout << number << " is an Automorphic number." << endl;
    } else {
        cout << number << " is not an Automorphic number." << endl;
    }

    return 0;
}
