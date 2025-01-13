#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        int num = i, sum = 0, rem = 0, temp = i;
        while (num != 0) {
            rem = num % 10;
            sum = (rem * rem * rem) + sum;
            num = num / 10;
        }
        if (temp == sum) {
            cout << temp << " ";
        }
    }

    return 0;
}
