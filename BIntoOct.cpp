#include<iostream>
#include<math.h>
using namespace std;

void convert(long long num)
{
    int octalDigit = 0, count = 1, i = 0, pos = 0;
    int octalArray[32] = {0};

    while(num != 0)
    {
        int digit = num % 10;
        
        octalDigit += digit * pow(2, i);
        i++;
        num /= 10;
        
        octalArray[pos] = octalDigit;
        
        if(count % 3 == 0)
        {
            octalDigit = 0;
            i = 0;
            pos++;
        }
        count++;
    }
        
    for (int j = pos; j >= 0; j--)
        cout<<octalArray[j];

}
int main()
{
    long long binary;
    
    printf("Enter binary number: ");
    scanf("%lld", &binary);
    
    convert(binary);
    
    return 0;
}