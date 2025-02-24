#include <iostream>
using namespace std;

int findMax(int arr[], int n, int index = 0, int maxVal = INT_MIN) {
    if (index == n) return maxVal;
    return findMax(arr, n, index + 1, max(arr[index], maxVal));
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Largest element: " << findMax(arr, n) << endl;
    return 0;
}