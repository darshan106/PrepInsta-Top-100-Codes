#include <iostream>
using namespace std;
 
int main()
{
  string binaryNumber;
    cin >> binaryNumber;
    
    cout << stoi(binaryNumber, 0, 2);
 
    return 0;
}
