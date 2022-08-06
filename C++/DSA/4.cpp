#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> res;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] < min)
                min = ar[i];
        }
        if (min % 2 == 0)
            res.push_back("CHEFINA");
        else
            res.push_back("CHEF");
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
}