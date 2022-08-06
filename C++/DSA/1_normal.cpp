#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
  int n=t;
  int ok=0;
    string result[n];
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b + c >= 100) && (a >= 10 && b >= 10 && c >= 10))
            result[ok]="PASS";
        else
            result[ok]="FAIL";
ok++;
    }
    for (int i = 0; i < ok; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}