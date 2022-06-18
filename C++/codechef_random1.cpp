#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int T;
    int P1, P2;
    cin >> T;
    int T1 = 0, T2 = 0;
    int L;
    int W;
    int maxL = INT_MIN;
    while (T > 0)
    {
        cin >> P1 >> P2;
        T1 += P1;
        T2 += P2;
        if (T1 > T2)
        {
            L = T1 - T2;
        }
        else
        {
            L = T2 - T1;
        }
        maxL = max(maxL, L);
        if (L == maxL && T1 > T2)
        {
            W = 1;
        }
        else if (L == maxL && T2 > T1)
        {
            W = 2;
        }

        T--;
    }

    cout << W << " " << maxL;

    return 0;
}