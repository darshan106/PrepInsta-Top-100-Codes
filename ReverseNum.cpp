#include <iostream>
using namespace std;
int main ()
{
    int num, reverse = 0, rem;
    num=1234;
    cout <<"\nThe number is"<<num; 
  
    while(num != 0)
    {
      rem = num % 10;
      reverse = reverse * 10 + rem;
      num /= 10;
    };
 
    cout <<"\nReversed Number: "<<reverse;
    
    return 0;
}