#include <iostream>
#include <algorithm>
using namespace std;

int tcs(int a)
{
    int s = 0;
    while(a > 0)
    {
        s += a % 10;
        a /= 10;
    }
    return s;
}

int main()
{
    int a, b;
    cin >> a >> b;
    float k = pow(10, a - 1), h = pow(10,a) - 1;
    for (int i = k; i <= h; i++)
    {
        int s = 0;
        if()
    }

    return 0;
}
