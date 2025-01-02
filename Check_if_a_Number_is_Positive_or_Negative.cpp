#include<iostream>
using namespace std;
int main()
{
    int num = 15;
    cout<<(num == 0 ? "Zero" :(num > 0 ? "Positive" : "Negative" )); 
    return 0;
}