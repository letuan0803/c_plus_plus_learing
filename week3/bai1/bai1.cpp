// Hai mảng giống nhau là hai mảng có cùng số phần tử và các phần tử ở vị trí giống nhau là như nhau.
// Yêu cầu
// Viết chương trình nhận vào từ bàn phím hai mảng và trả lời hai mảng có giống nhau không.
// Input
// Dòng đầu tiên chứa số nguyên n
// Hai dòng tiếp theo lần lượt là n số nguyên thuộc hai mảng a và mảng b
// Ouput
// Nếu hai mảng giống nhau không, in ra "YES", ngược lại in ra "NO".
// Gợi ý
// Cần duyệt mảng từng vị trí.
// Nếu có một vị trí khác nhau, in ra "NO" và dừng chương trình
// Nếu duyệt hết mảng mà không tìm ra vị trí nào khác nhau, in ra "YES" và dừng chương trình
// Lưu ý
// Có thể dùng <vector> để khai báo mảng
// Có thể duyệt mảng từ trái qua phải hoặc từ phải qua trái
// Có thể dùng hàm với tham số là hai mảng cần so sánh và đầu ra có kiểu bool (true / false)
// For example:

// Input	Result
// 2
// 4 5
// 4 5
// YES
// 2
// 4 4
// 4 5
// NO

#include <iostream>

using namespace std;

int main()
{
    int arrayLength;
    cin >> arrayLength;

    int vectorA[arrayLength], vectorB[arrayLength];

    for (int i = 0; i < arrayLength; i++)
    {
        cin >> vectorA[i];
    }
    
    for (int i = 0; i < arrayLength; i++)
    {
        cin >> vectorB[i];
    }

    for (int i = 0; i < arrayLength; i++)
    {
        if(vectorA[i] != vectorB[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}