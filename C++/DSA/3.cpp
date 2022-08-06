#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    int maxT, maxN, sumN;
    vector<int> final;
    while (t--)
    {
        vector<int> ar;
        int sum = 0, count = 0, All_sum = 0;
        cin >> maxT >> maxN >> sumN;
        while (maxT--)
        {
            if (sum + maxN <= sumN)
            {
                sum = sum + maxN;
                ar.push_back(maxN);
                continue;
            }
            if (sumN - sum > 0)
            {
                ar.push_back(sumN - sum);
                sum = sumN;
                break;
            }
        }

        for (int i = 0; i < ar.size(); i++)
        {
            All_sum = All_sum + (ar[i] * ar[i]);
        }

        final.push_back(All_sum);
    }

    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << endl;
    }
}