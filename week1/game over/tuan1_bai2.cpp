#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
bool checkValidTriangle(float edge1, float edge2, float edge3);

float calAreaTriangle(float edge1, float edge2, float edge3);

bool checkValidTriangle(float edge1, float edge2, float edge3)
{
    if (edge1 <= 0 || edge2 <= 0 || edge3 <= 0)
    {
        return false;
    }
    if (edge1 > (edge2 + edge3) || edge2 > (edge1 + edge3) || edge3 > (edge1 + edge2) || edge1 < abs(edge2 - edge3) || edge2 < abs(edge1 - edge3) || edge3 < (edge1 - edge2))
    {
        return false;
    }
    return true;
}

float calAreaTriangle(float edge1, float edge2, float edge3)
{   
    float p = (edge1 + edge2 + edge3) / 2;
    return sqrt(p*(p-edge1)*(p-edge2)*(p-edge3));

}
int main()
{
    int edge1, edge2, edge3;
    cin >> edge1 >> edge2 >> edge3;

    if (checkValidTriangle(edge1, edge2, edge3))
    {
        cout << fixed << setprecision(2) << calAreaTriangle(edge1, edge2, edge3);
    }
    else
    {
        cout << false;
    }

    return 0;
}
