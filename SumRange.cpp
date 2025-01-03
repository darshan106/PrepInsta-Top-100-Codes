#include<iostream>
using namespace std;

int calc(int a, int b) {
    if(a > b) {
        return 0;
    }
    return a + calc(a + 1, b); 
}

int main() {
    int a = 5, b = 10;
    int sum = calc(a, b);
    cout << sum;
    return 0;
}