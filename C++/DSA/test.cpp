#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> all;
    while (t--)
    {
        int n;
        cin >> n;
        int z;
        int co = 0;
        for (int i = 1; i <= n; i += 2)
        {
            z = n - i + 1;
            co = co + (z * z);
        }
        all.push_back(co);
    }
for(int i=0; i<all.size(); i++) {
    cout<<all[i]<<endl;
}
}
