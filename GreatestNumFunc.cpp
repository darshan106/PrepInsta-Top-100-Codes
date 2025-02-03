#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num1 = 10, num2 = 20, num3 = 30, result;
    result = max(num1, max(num2, num3));
    cout<<result;
    return 0;
}
