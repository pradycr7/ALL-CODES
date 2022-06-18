#include <iostream>
#include <climits>
#include <cmath>

using namespace std;
int palin(int num)
{
    int q, rem, rev = 0, c;
    q = num;
    int r = num;

    while (r > 0)
    {
        r = r / 10;
        c++;
    }
    while (q > 0)
    {
        q = num / 10;
        rev += q * pow(10, c);
        rem = q % 10;
        c--;
    }

    if (num == rev)
        return num;
    else
        return 0;
}

int main()
{
    int  prod;
    int maxNo = INT_MIN;
    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            prod = i * j;
        }
        for (int i = 10000; i <= palin(prod); i++)
        {
            maxNo = max(maxNo, i);
        }
    }
    cout << maxNo;

    return 0;
}