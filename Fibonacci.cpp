#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 1, nextTerm, num = 20;
    cout<<a<<","<<b<<",";
    for(int i = 2; i < num; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;

        cout<<nextTerm<<",";
    }

    return 0;
}