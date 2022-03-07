// Yêu cầu:
// Giả sử A và B là 2 vectơ n chiều.

// Hãy tính tích vô hướng của 2 vectơ trên bằng công thức:

// A(x1,x2,...,xn)∗B(y1,y2,...,yn)=x1∗y1+x2∗y2+....+xn∗yn

// Input:
// Dòng đầu tiên là độ dài n, 0<n≤1000
// Dòng thứ 2 chứa tọa độ của vectơ A là n số thực cách nhau bởi dấu cách
// Dòng thứ 3 chứa tọa độ của vectơ B là n số thực cách nhau bởi dấu cách
// Output:
// Tích vô hướng của vectơ A và B với kết quả làm tròn đến chữ số thập phân thứ hai.
// Gợi ý:
// Khai báo biến const int MAX_N = 1000;
// Khai báo biến int n; và nhập dữ liệu cin >> n;
// Khởi tạo 2 mảng double vectorA[MAX_N] và double vectorB[MAX_N]
// Tạo vòng lặp để nhập vào từng tọa độ cho 2 mảng
// Khai báo biến kết quả double product = 0;
// Tạo vòng lặp chạy từ i=0 đến n−1, tại mỗi lần lặp, tính product += vectorA[i] * vectorB[i];
// Lưu ý:
// Khi khai báo biến với từ khóa const, biến đó được định nghĩa là hằng số và không thể thay đổi giá trị sau khi khởi tạo.
// Có thể thay khai báo hai vector trên bằng lệnh
// vector<double> vectorA(n), vectorB(n);
// để sử dụng kiểu vector của thư viện STL được cung cấp sẵn. Nhớ khai báo thư viện bằng lệnh
// #include <vector>
// ở đầu chương trình.
// Đọc thêm (khó): CPU của máy tính có thể có nhiều lõi (core) dùng để chạy song song các đoạn mã lệnh, tăng tốc độ chạy của chương trình. Tích vô hướng có thể thực hiện tính toán song song bằng các thư viện <thread>, <atomic>, <vector>
// For example:

// Input	Result
// 2
// 1 2
// 3 4
// 11.00

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    double vectorA[n], vectorB[n];
    double res = 0;


    for (int i = 0; i < n; i++)
    {
        cin >> vectorA[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> vectorB[i];
    }

    for (int i = 0; i < n; i++)
    {
        res = res + vectorA[i] * vectorB[i];
    }
    cout << res;
}
