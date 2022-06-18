#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;

    cin >> T;
    int N, sum;
    int q, r;
    while (T > 0)
    {
        cin >> N;
        q=N;
        sum = 0;
        while (q > 0)
        {
            r = q % 10;
            q = q / 10;
            sum += r;
        }
        T--;
        cout << sum << endl;
    }
    return 0;
}