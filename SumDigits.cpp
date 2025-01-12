#include<iostream>
using namespace std;

int main ()
{
    int num, sum = 0;
 
    num=1234;
    cout <<"\nThe number is: " << num; 
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
    cout <<"\nSum of digits: " << sum;
 
    return 0;
}