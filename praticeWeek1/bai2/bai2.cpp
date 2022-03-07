// Viết hàm kiểm tra 2 mảng có bằng nhau hay không. Hàm nhận vào 3 tham số, hai mảng số nguyên 1 chiều và một sô nguyên n là độ dài của mảng. Hàm trả về true nếu n phần tử của 2 mảng bằng nhau đôi một, nếu không trả về false.

// bool compareArray(int a[], int b[], int n)
// For example:

// Test	Result
// int a[] = {1, 2, 3, 4, 5};
// int b[] = {1, 2, 3, 4, 4};
// cout << boolalpha << compareArray(a, b, 5);
// false

#include <iostream>
using namespace std;

// ham so sanh
bool compareArray(int a[], int b[], int n);
// ham sap xep mang theo thu tu tang dan
void sortArray(int a[]);

// function compare two array
// this function sort two array, then compare each element of array
// lttuan 28 02 2022
bool compareArray(int a[], int b[], int n)
{
}
// this function sort a array ascense
// lttuan 28 02 2022
void sortArray(int a[]) {
    int length = sizeof(a);
    for (int i = 0; i < sizeof(a); i++)
    {
        
    }
    
    cout << length;
}

int main()
{
    int a[] = {1,2,3,4};
    sortArray(a);
}