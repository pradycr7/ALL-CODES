#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int A, B;
    int r;
    while (T > 0)
    {
        cin >> A >> B;
        r = A % B;
        cout << r << endl;
        T--;
    }

    return 0;
}