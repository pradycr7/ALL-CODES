
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X;
    float Y;
    cin >> X >> Y;
    if (X % 5 == 0 && (X + 0.5) <= Y)
    {
        Y -= (X + 0.50);
        cout << fixed << setprecision(2) << Y << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << Y << endl;
    }
    return 0;
}