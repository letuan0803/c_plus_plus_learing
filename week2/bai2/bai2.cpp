// Yêu cầu
// Nhập một số nguyên dương n từ bàn phím.

// Kiểm tra và in ra màn hình tất cả các số nguyên dương nhỏ hơn hoặc bằng n và chia hết cho 7.

// Input
// Một dòng văn bản chứa số nguyên n, biết 0<n<10000
// Output
// Một dòng văn bản chứa các số nguyên dương nhỏ hơn hoặc bằng n và chia hết cho 7 theo thứ tự từ nhỏ đến lớn, hai số cách nhau bởi dấu cách
// Gợi ý
// Có thể dùng cả ba loại vòng lặp for, while và do ... while
// Biến đếm được khởi tạo bằng số đầu tiên chia hết cho 7 (số 7), sau đó mỗi lần lặp tăng biến đếm thêm 7 đơn vị để bảo đảm nó luôn chia hết cho 7.

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int number;

    cin >> number;
    
    for (int i = 7; i <= number; i=i+7)
    {
        cout << i << " "; 
    }

    
}