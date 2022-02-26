#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

bool checkValidTriangle(float edge1, float edge2, float edge3)
{
    if (edge1 > (edge2 + edge3) || edge2 > (edge1 + edge3) || edge3 > (edge1 + edge2) || edge1 < abs(edge2 - edge3) || edge2 < abs(edge1 - edge3) || edge3 < (edge1 - edge2))
    {
        return false;
    }
    return true;
}
int main()
{
    int edge1, edge2, edge3;
    cin >> edge1 >> edge2 >> edge3;
    if (edge1 <= 0 || edge2 <= 0 || edge3 <= 0)
    {
        cout << "invalid";
        return 0;
    }

    if(checkValidTriangle(edge1, edge2, edge3))
    {
        cout << "true";
    }
    else
    {
        cout << false;
    }

    return 0;
}
