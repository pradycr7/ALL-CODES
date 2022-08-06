#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n = t;
    int num[n];
    int ok = 0;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n > x)
        {
            if ((n - x) % 4 == 0)
                num[ok] = (n - x) / 4;
            else
                num[ok] = 1 + (n - x) / 4;
        }
        else
            num[ok] = 0;
        ok++;
    }
    for (int i = 0; i < ok; i++)
    {
        cout << num[i] << endl;
    }
}