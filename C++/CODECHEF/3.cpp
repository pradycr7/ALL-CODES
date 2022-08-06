#include <bits/stdc++.h>
using namespace std;

int toDivide(int A, int B, int N)
{

    while (N != INT_MAX)
    {
        int k = 1, i = 0;
        int Barr[N];
        while (i < N - 1)
        {
            if (B != k)
                Barr[i++] = k;
            k++;
        }

        for (i = 0; i < N - 1; i++)
        {
            if (N % Barr[i] == 0)
            {
                if (N % A == 0)
                    return N;
            }
        }
        N++;
    }
    return -1;
}

int main()
{

    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;

     int ok = toDivide(a, b, n);
    cout<<ok;
}