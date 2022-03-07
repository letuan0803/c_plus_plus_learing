// Viết chương trình sử dụng khai triển Taylor để tính giá trị hàm mũ theo công thức sau:
// ex=1+x11!+x22!+x33!+x44!+x55!+...
// Input:
// Một số nguyên không âm x duy nhất (0≤x≤50).
// Output:
// Kết quả ex được tính theo công thức với sai số tới 0.001. Kết quả làm tròn đến số thập phân thứ tư.
// Gợi ý:
// Sai số tới 0.001 có nghĩa là tổng trước và sau khi cộng thêm một lượng xii! không vượt quá 0.001.
// Bắt đầu với biến đếm i = 1.
// Sử dụng vòng lặp while lặp lại quá trình sau với điều kiện thực hiện là sum - oldSum > 0.001:
// Lưu lại giá trị của sum vào oldSum.
// (*) Tính giá trị xii!.
// Cộng thêm giá trị vừa tính được vào sum.
// Tăng giá trị biến đếm lên 1.
// Lưu ý:
// Cần lưu ý đến giá trị khởi tạo của sum và oldSum tương ứng là 1 và 0.
// Liệu có cách làm nào để bước (*) không cần tính lại giá trị mũ và giai thừa từ đầu không?
// Ở bước i, ta đã tính được xi và i! rồi. Để tận dụng được giá trị này, ta khởi tạo chúng từ trước vong lặp.
// Tới bước i+1, các giá trị này vẫn giữ nguyên từ bước i, chỉ cần nhân thêm x vào xi là có kết quả xi+1, tương tự với i!
// Đọc thêm: Nếu cần tính ex với x là một số thực dương bất kì, ta có thể làm theo các bước sau
// Tính ef với f=⌊x⌋ là phần nguyên của x
// ef={(ef/2)2e×(e(f−1)/2)2nếu f chẵnnếu f lẻ
// double exp_int(int f) {
//     if (f == 0)
//         return 1.0;
//     const double e = 2.718281828459045235360287471352;
//     double e2 = exp_int(f/2);
//     if (f % 2 == 0)
//         return e2*e2;
//     else
//         return e2*e2*e;
// }
// Tính er với r=x−⌊x⌋ là phần lẻ của x sử dụng khai triển Taylor. Do r<1 nên sai số của khai triển Taylor đến số hạng xnn! bé hơn 3(n+1)!. Vòng lặp có thể dừng khi đại lượng này bé hơn 0,0001
// For example:

// Input	Result
// 1
// 2.7183
// 25
// 72004899337.3855


#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long number;
    int count = 0;

    cin >> number;
    do
    {
        number = number / 10;
        count++;
    } while (number != 0);

    cout << count;
}
