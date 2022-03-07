// Yêu cầu
// Viết chương trình liệt kê tất cả các số chính phương nằm trong khoảng từ cận dưới lowerBound đến cận trên upperBound.

// Input
// Một dòng chứa hai số nguyên dương lowerBound và upperBound
// Output
// Một dòng chứa tất cả các số chính phương nằm trong khoảng [lowerBound,upperBound] theo thứ tự tăng dần, hai số cách nhau bởi một dấu cách
// Gợi ý
// Cách nhanh nhất để giải bài này là dùng một vòng lặp có biến đếm chạy từ lowerBound−−−−−−−−−−√ đến upperBound−−−−−−−−−−√
// In ra bình phương của số đếm sau khi kiểm tra có nằm trong khoảng  [lowerBound,upperBound]
// Lưu ý
// Nếu dùng biến đếm chạy từ lowerBound đến upperBound thì phải kiểm tra số đó có phải là số chính phương trước khi in. Cách này chậm vì hầu hết các con số được duyệt không phải là số chính phương. Ví dụ lowerBound=1 và upperBound=109 thì phải lặp 1 tỷ lần. Trong khi đó với cách ở phần gợi ý, vòng lặp chỉ lặp 109−−−√ lần.

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int lowerNumber, upperNumber;
    cin >> lowerNumber >> upperNumber;

    for (int i = lowerNumber; i <= upperNumber; i++)
    {
        float sqrtOfNumber = sqrt(i);
        if (sqrtOfNumber == (int)sqrtOfNumber) {
            cout << i << " ";
        }
    }

    return 0;
}
