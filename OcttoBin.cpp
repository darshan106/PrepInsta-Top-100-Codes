#include<iostream>
#include<math.h>
using namespace std;

 
void
convert (int octal) 
{
  
int i = 0, decimal = 0;
  
    while (octal != 0)
    
    {
      
int digit = octal % 10;
      
decimal += digit * pow (8, i);
      
 
octal /= 10;
      
i++;
    
} 
 
printf ("Decimal Value: %d\n", decimal);
  
 
long long binary = 0;
  
int rem;
  
i = 1;
    while (decimal != 0)
    
    {
      
rem = decimal % 2;
      
decimal /= 2;
      
binary += rem * i;
	i *= 10;
    
}
  
cout << binary;

}
int main () 
{
  
int octal;
cout << "Octal Value: "; cin >> octal;
  convert (octal);
  return 0;
}
