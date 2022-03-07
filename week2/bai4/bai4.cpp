// Yêu cầu:
// "Vừa gà vừa chó,

// Bó lại cho tròn,

// Ba mươi sáu con,

// Một trăm chân chẵn"

// Từ bài toán dân gian trên, mở rộng thành chương trình nhận đầu vào là tổng số con và tổng số chân của gà và chó. Nếu tìm được số phù hợp, in ra số lượng gà và số lượng chó. Ngược lại, in ra "invalid"

// Input:
// Gồm 2 số nguyên dương: tổng số con và tổng số chân
// Ouput:
// Nếu tìm ra được phương án phù hợp, in ra số lượng gà và số lượng chó theo mẫu sau: "chicken = <số gà>, dog = <số chó>".
// Nếu không tìm được phương án phù hợp, in ra "invalid"
// Gợi ý:
// Khai báo biến int total, totalLegs; và nhập dữ liệu cin >> total >> totalLegs;
// Khai báo biến bool flag = false để xác định bài toán có lời giải hay không, có giá trị ban đầu là false có nghĩa là chưa tìm ra được lời giải.
// Sử dụng vòng lặp for kiểm tra hết các trường hợp. Khai báo biến chạy int numChicken là biến chạy của vòng for (bạn cũng có thể để biến chạy là numDog, cần chú ý điều kiện)
// Trong vòng for dùng câu lệnh rẽ nhánh if để kiểm tra điều kiện numChicken*2+(total-numChicken)*4 == totalLegs . Nếu đúng in ra như mẫu output, chuyển biến flag = true do chúng ta đã tìm được phương án thích hợp.
// Nếu sau khi vòng for kết thúc, kiểm tra giá trị flag, nếu flag == false có nghĩa là không tìm ra phương án phù hợp, in ra "invalid".

// input animal count and animal leg count
// output dog leg and chicken leg, or invalid if cannot find valid response
// call chicken count = a, dog count = b
// a + b = animalCount && 4a + 2b = animalLeg
// --> b = animalCount - a && 4a + 2(animalCount - a) = animalLeg
// --> 2a + 2animalCount = animalLeg
// --> a = 0.5animalLeg - animalCount && b = animalCout - a
// if a is not interger && a > 0 then invalid

#include <iostream>

using namespace std;

int main()
{
    int animalCount, animalLeg;

    cin >> animalCount >> animalLeg;

    float chickenCount = 0.5 * animalLeg - animalCount;
    float dogCount = animalCount - chickenCount;

    if (chickenCount == (int)chickenCount && chickenCount > 0 && dogCount > 0)
    {
        // because mistake about number of chicker feet = 4, then swap variable stand for chicken and dog
        cout << "chicken = " << dogCount << ", dog = " << chickenCount;
    }
    else
    {
        cout << "invalid";
    }
}