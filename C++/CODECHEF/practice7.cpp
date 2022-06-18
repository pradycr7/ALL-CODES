#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, fact;
    int T;
    cin >> T;

    while (T > 0)
    {
        fact = 1;
        cin >> N;
        for (int i = N; i >= 1; i--)
        {
            fact *= i;
        }
        cout << fact << endl;

        T--;
    }

    return 0;
}