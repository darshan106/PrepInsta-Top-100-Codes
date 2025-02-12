
#include <iostream>
#include <string>

using namespace std;

int replaceZeroWithOne(int num) {
    string numStr = to_string(num);
    
    for (char &ch : numStr) {
        if (ch == '0') {
            ch = '1';
        }
    }

    return stoi(numStr);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int newNum = replaceZeroWithOne(num);
    cout << "Modified number: " << newNum << endl;

    return 0;
}
