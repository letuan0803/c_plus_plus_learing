// Yêu cầu
// Nhập vào số nguyên dương n và in ra dãy 1 2 3 … n gồm các số dương nhỏ hơn hoặc bằng n, cách nhau bởi dấu cách.

// Input
// Một dòng văn bản chứa số n>0
// Output
// Một dòng văn bản chứa n số nguyên dương 1 2 3 … n, hai số liền nhau cách nhau bởi dấu cách
// Gợi ý
// Sử dụng vòng lặp for, while hoặc do ... while
// Khởi tạo biến đếm bằng 1 (số đầu tiên cần in ra) 
// In ra biến đếm và dấu cách rồi tăng biến đếm lên 1

#include <iostream>

using namespace std;


int main() {
    int number;
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        cout << i << " ";
    }

    return 0;
}