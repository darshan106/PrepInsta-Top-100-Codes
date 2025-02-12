#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int num;
    cin >> num;
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            cout << num << " = " << i << " + " << num - i << endl;
            return 0;
        }
    }
    cout << "Not possible" << endl;
}
