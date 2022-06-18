#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T, N;
    cin >> T;
    int q,r,rev, count;
    while (T > 0)
    {
        cin >> N;
        r=0;
        count = 0;
        rev=0;
        q=N;
        while(q>0)
        {
           count++;
           q=q/10; 
        }
        while (N > 0)
        {
            r=N%10;
            N=N/10;
            rev+=r*pow(10,count-1);
            count--;
        }
        cout << rev << endl;
        T--;
    }

    return 0;
}