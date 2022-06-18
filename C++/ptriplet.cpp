#include <iostream>
#include <math.h>
using namespace std;

int max(int a, int b, int c)
{
    int maxi;
    if (a > b && a > c)
        maxi = a;
    else if (b > a && b > c)
        maxi = b;
    else
        maxi = c;
  
    return maxi;
}
void pyt(int n1, int n2, int n3)
{
    if (n1 == max(n1, n2, n3))
    {
        if (n1 *n1 == n2 * n2 + n3 * n3)
        {
            cout << " P T ";
        }
        else
    {
        cout << " fuck off";
    }
    }
    else if (n2 == max(n1, n2, n3))
    {
        if (n2 *n2 == n1 * n1 + n3 * n3)
        {
            cout << " P T ";
        }
        else
    {
        cout << " fuck off";
    }
    }
    else
    {
        if (n3 *n3 == n1 * n1 + n2 * n2)
        {
            cout << " P T ";
        }
        else
    {
        cout << " fuck off";
    }
    }

    return;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    pyt(a, b, c);

    return 0;
}