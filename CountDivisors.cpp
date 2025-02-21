#include <iostream>
#include <vector>
using namespace std;

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            count += (i * i == num) ? 1 : 2;
        }
    }
    return count;
}

int countNumbersWithXDivisors(int N, int X) {
    int result = 0;
    for (int i = 1; i <= N; i++) {
        if (countDivisors(i) == X) {
            result++;
        }
    }
    return result;
}

int main() {
    int N, X;
    cout << "Enter N and X: ";
    cin >> N >> X;
    cout << "Count: " << countNumbersWithXDivisors(N, X) << endl;
    return 0;
}
