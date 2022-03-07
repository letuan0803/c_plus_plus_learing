// Viết hàm đổi một số nguyên từ hệ cơ số 10 sang hệ cơ số 2 như sau:

// string convertDecimalToBinary(int number);
// For example:

// Test	Result
// cout << convertDecimalToBinary(118);
// 1110110


#include <iostream>
#include <math.h>
#include <string>

using namespace std;
 
// string convertDecimalToBinary(int decimalNumber)
// {
//     long long binaryNumber = 0;
//     int p = 0;
//     while (decimalNumber > 0)
//     {
//         binaryNumber += (decimalNumber % 2) * pow(10, p);
//         ++p;
//         decimalNumber /= 2;
//     }
//     return to_string(decimalNumber);
// } 

long long convertDecimalToBinary2(int decimalNumber) // Ctrl H => find & replace
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
 
int main()
{
    int decimalNumber;
    cin >> decimalNumber;
    cout << convertDecimalToBinary2(decimalNumber);
}
 