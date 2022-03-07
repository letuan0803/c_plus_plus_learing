// Yêu cầu
// Hãy viết chương trình nhận vào từ bàn phím một số nguyên n và in ra một viên kim cương có kích thước (2n+1) x (2n+1).

// Input
// Một dòng văn bản chứa số n>0
// Output
// In ra một viên kim cương có kích thước (2n+1) x (2n+1).
// Gợi ý
// sử dụng 2 vòng lặp for lồng nhau và câu lệnh rẽ nhánh if-else.
// Cách 1 for 0  đến 2n-1 bình thường => khó hiểu
// Cách 2 dùng for x, y chạy từ -n đến n kết hợp biểu thức phương trình hình thoi trong hệ trục toạ độ.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int j = n; j >= -n; j--)
    {
        for (int i = -n; i <= n; i++)
        {
            if (i + j == n || i + j == -n || i - j == n || i - j == -n)
            {
                cout << "x ";
            }
            else
            {
                cout << ". ";
            }
        }
        cout << endl;
    }
}