#include <iostream>
using namespace std;

string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string convert(int n) {
    if (n == 0) return "Zero";
    if (n < 10) return ones[n];
    if (n < 20) return teens[n - 10];
    if (n < 100) return tens[n / 10] + (n % 10 ? " " + ones[n % 10] : "");
    if (n < 1000) return ones[n / 100] + " Hundred" + (n % 100 ? " " + convert(n % 100) : "");
    if (n < 1000000) return convert(n / 1000) + " Thousand" + (n % 1000 ? " " + convert(n % 1000) : "");
    return "Out of range";
}

int main() {
    int n;
    cin >> n;
    cout << convert(n) << endl;
}
