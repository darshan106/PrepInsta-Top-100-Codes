#include <iostream>
using namespace std;

void findQuadrant(int x, int y) {
    if (x > 0 && y > 0) cout << "Quadrant 1";
    else if (x < 0 && y > 0) cout << "Quadrant 2";
    else if (x < 0 && y < 0) cout << "Quadrant 3";
    else if (x > 0 && y < 0) cout << "Quadrant 4";
    else if (x == 0 && y == 0) cout << "Origin";
    else cout << "On Axis";
}

int main() {
    int x, y;
    cout << "Enter coordinates: ";
    cin >> x >> y;
    findQuadrant(x, y);
    return 0;
}
