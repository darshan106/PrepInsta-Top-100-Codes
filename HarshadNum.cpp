#include<iostream>
using namespace std;

int checkHarshad(int number){
    int sum, temp = number;

    while(number != 0){
        sum = sum + temp % 10;
        temp = temp / 10;
    }
        return number % sum == 0;
        
}
int main(){
    int num = 153;

    if(checkHarshad(num))
        cout<<"It is a Harshad Number"<<num;
    else
        cout<<"It is not a Harshad Number";

    return 0;
}
