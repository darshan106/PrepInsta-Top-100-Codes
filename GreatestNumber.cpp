#include<iostream>
using namespace std;

int main(){
    int num1, num2, greatest;
    cout<<"Enter first number "<<num1<<endl;
    cout<<"Enter second number "<<num2<<endl;
    cout<<"Largest number is "<<(greatest = num1 > num2? num1: num2);
    return 0;
}