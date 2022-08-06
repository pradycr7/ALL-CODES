#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> all;
    while (t--)
    {
        int a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        if((a==a1 || a==b1) && (b==a1 || b==b1))
        all.push_back(1);
        else if((a==a2 || a==b2) && (b==a2 || b==b2))
        all.push_back(2);
        else
        all.push_back(0);

    }

    for (int i = 0; i < all.size(); i++)
    {
        cout << all[i] << endl;
    }
}
