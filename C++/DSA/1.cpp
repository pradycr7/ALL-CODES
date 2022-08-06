#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    vector<string> result;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b + c >= 100) && (a >= 10 && b >= 10 && c >= 10))
            result.push_back("PASS");
        else
            result.push_back("FAIL");

    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}