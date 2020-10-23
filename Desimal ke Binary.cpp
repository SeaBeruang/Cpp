#include <iostream>
#include <cmath>

using namespace std;

int convertBinaryToDecimal(long long);

int main()
{
    long long n;

    cout << "Enter a decimal number: ";
    cin >> n;
 
    cout << n << " in decimal = " << convertBinaryToDecimal(n) << "in binary";
    return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        decimalNumber += remainder*pow(10,i);
        ++i;
    }
    
    return decimalNumber;
}
