#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> candy;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n > x)
        {
            if ((n - x) % 4 == 0)
                candy.push_back((n - x) / 4);
            else
                candy.push_back(1 + (n - x) / 4);
        }
        else
            candy.push_back(0);
    }

    for (int i = 0; i < candy.size(); i++)
    {
        cout << candy[i] << endl;
    }
}