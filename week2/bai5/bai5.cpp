// Yêu cầu
// Hãy viết chương trình nhận vào từ bàn phím một số nguyên dương n và in ra màn hình một chữ X có kích thước (2n+1) x (2n+1).

// Input
// Một dòng văn bản chứa số n>0
// Output
// Hình một chữ X có kích thước (2n+1) x (2n+1).
// Gợi ý
// sử dụng 2 vòng lặp for lồng nhau và một câu lệnh rẽ nhánh if-else.
// In hình chữ X chính là in ra 2 đường chéo của hình vuông.
// Lưu ý
// Các điểm nằm trên đường chéo chính (từ trái qua phải) có chỉ số hoành độ bằng tung độ (i = j).
// Các điểm nằm trên đường chéo phụ (từ phải qua trái) có tổng chỉ số hoành độ và tung độ bằng kích thước hình vuông + 1. ( i + j = (2*n+1)+1 )
// Tham khảo cách sử dụng 2 vòng lặp lồng nhau kết hợp vs câu lệnh rẽ nhánh như sau:

// symbol X is draw by 2 line , first line is x = y, the second line is x = a - x, with a = 2b + 1, b is a number from keyboard
// use a two dimension matrix for carry two line
// for each array for mark a cell math two line x = y, x = 2b + 1 - x
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < 2 * x + 1; i++)
    {
        for (int j = 0; j < 2 * x + 1; j++)
        {
            if ( i == j || i + j == 2 * x ) {
                cout << "x";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}