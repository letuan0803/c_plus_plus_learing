// Yêu cầu:
// Viết chương trình nhập vào một mảng số thực có độ dài n và in ra màn hình dãy đó theo thứ tự đảo ngược. n tối đa 1000

// Kết quả làm tròn đến chữ số thập phân thứ hai.

// Input:
// Dòng đầu tiên là độ dài n, 0<n≤1000.
// Dòng thứ 2 chứa n số thực cách nhau bởi dấu cách
// Output:
// In ra dãy đảo ngược đã được làm tròn, cách nhau bởi dấu cách
// Gợi ý:
// Khai báo biến const int MAX_N = 1000;
// Khai báo biến int n; và nhập dữ liệu cin >> n;
// Khởi tạo mảng double arrayX[MAX_N];
// Tạo vòng lặp để nhập vào từng phần tử của mảng.
// Tạo vòng lặp với biến chạy từ n giảm dần để in ra dãy đảo ngược với giá trị đã làm tròn.
// Lưu ý:
// Các hàm làm tròn là fixed và setprecision nằm trong thư viện <iomanip>
// SINH VIÊN KHÔNG ĐƯỢC PHÉP TẠO MẢNG CÓ KÍCH THƯỚC LÀ BIẾN:

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int arrayLength;
    cin >> arrayLength;
    
    float arrayInput[arrayLength];

    for (int i = 0; i < arrayLength; i++)
    {
        cin >> arrayInput[i];
    }
    

    for (int i = arrayLength - 1; i >= 0; i--)
    {
        cout << fixed << setprecision(2) << arrayInput[i] << " ";
    }
    
}