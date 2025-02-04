#include<iostream>
using namespace std;

void convertOctal(int num)
{
    int octalArray[32];
 
    int i = 0;
    while (num > 0) {
 
        octalArray[i] = num % 8;
        num = num / 8;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
        cout << octalArray[j];
}
 
int main()
{
    int n = 148;
    convertOctal(n);
    return 0;
}