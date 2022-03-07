// Thuật toán Euclid được dùng để tìm ước chung lớn nhất (UCLN) giữa 2 số nguyên. Ý tưởng của thuật toán như sau:

// Với 2 số a và b (a>=b), nếu a không chia hết cho b thì UCLN(a,b)=UCLN(b,r) với r là phần dư khi chia a cho b (sinh viên tự chứng minh)
// Nếu a chia hết cho b thì UCLN(a,b)=b
// Viết hàm int computeGcd(int a, int b) trả về ước chung lớn nhất giữa 2 số nguyên dương a và b.
// For example:

// Test	Result
// cout << computeGcd(4, 6);
// 2
