#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T, N;
    cin >> T;
    int r, count;
    while (T > 0)
    {
        cin >> N;
        r=0;
        count = 0;
        while (N > 0)
        {
            r = N % 10;
            if (r==4)
            {
                count++;
                N = N / 10;
            }
            else
            {
                N=N/10;
            }
        }
        cout << count << endl;
        T--;
    }

    return 0;
}