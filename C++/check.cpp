#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int maxL = INT_MIN;
    cin >> T;
    int p1, p2;
    int win;
    int lead;

    while (T--)
    {
       
        cin >> p1 >> p2;
        

        int t1 = 0;
        int t2 = 0;

        t1 += p1;
        t2 += p2;

        if (t1 > t2)
        {
            lead = t1 - t2;
        }
        else
        {
            lead = t2 - t1;
        }

        maxL = max(maxL, lead);

        if(maxL == lead && t1 > t2){
            win = 1;
        }
        if(maxL == lead && t1 < t2){
            win = 2;
        }
       
    }

    cout << win << " " << maxL;

    return 0;
}