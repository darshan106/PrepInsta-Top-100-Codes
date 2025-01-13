#include<iostream>
using namespace std;

int main(){
    int num,rem,temp,sum = 0;

    cout<<"Enter you number"<<endl;
    cin>>num;

    temp = num;
    while(num!=0){
        rem = num % 10;
        sum = (rem*rem*rem) + sum;
        num = num / 10;
    }

    if(temp == sum){
        cout<<"Armstrong Number"<<endl;
    }
    else cout<<"Not an Armstrong Number"<<endl;
    return 0;
}