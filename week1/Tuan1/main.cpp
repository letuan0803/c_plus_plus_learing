#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

// hàm check xem tam giác hợp lệ hay k
// lttuan 20 02 2022
bool checkValidTriangle(float edge1, float edge2, float edge3)
{
    if (edge1 <= 0 || edge2 <= 0 || edge3 <= 0)
    {
        return false;
    }

    if (edge1 >= (edge2 + edge3) || edge2 >= (edge1 + edge3) || edge3 >= (edge1 + edge2) || edge1 <= abs(edge2 - edge3) || edge2 <= abs(edge1 - edge3) || edge3 <= abs(edge1 - edge2))
    {
        return false;
    }

    return true;
}

// hàm tính diện tích tam giác
// lttuan 20 02 2022
float calTriangleArea(float edge1, float edge2, float edge3) {
    float p, s;

    p = (edge1 + edge2 + edge3) / 2;

    s = sqrt(p*(p-edge1)*(p-edge2)*(p-edge3));

    return s;
}


int main()
{
    int edge1, edge2, edge3;
    cin >> edge1 >> edge2 >> edge3;

    if(checkValidTriangle(edge1, edge2, edge3))
    {
        cout << fixed << setprecision(2) << calTriangleArea(edge1, edge2, edge3);
    }
    else
    {
        cout << "invalid";
    }

    return 0;
}
