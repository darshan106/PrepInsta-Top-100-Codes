#include <iostream>
using namespace std;

int countDecodings(string s) {
    int n = s.length();
    if (s[0] == '0') return 0;
    int prev = 1, curr = 1;

    for (int i = 1; i < n; i++) {
        int temp = (s[i] != '0') ? curr : 0;
        int num = stoi(s.substr(i - 1, 2));
        if (num >= 10 && num <= 26) temp += prev;
        prev = curr;
        curr = temp;
    }
    return curr;
}

int main() {
    string s;
    cin >> s;
    cout << countDecodings(s) << endl;
}
