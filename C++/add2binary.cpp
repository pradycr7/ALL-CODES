#include <bits/stdc++.h>
using namespace std;
int d_to_b(int num)
{
    int quo = num;
    int rem;

    int deci = 0;
    int temp = 0;
    while (quo > 0)
    {
        rem = quo % 2;
        deci += rem * pow(10, temp);
        quo = quo / 2;
        temp++;
    }

    return deci;
}
int b_to_d(int num)
{
    int quo = num;
    int rem;

    int deci = 0;
    int temp = 0;
    while (quo > 0)
    {
        rem = quo % 10;
        deci += rem * pow(2, temp);
        quo = quo / 10;
        temp++;
    }

    return deci;
}

int main()
{
    int n1;
    int n2;
    int sum_deci;
    int sum_binary;

    cin >> n1 >> n2;

    sum_deci = b_to_d(n1) + b_to_d(n2);

    sum_binary = d_to_b(sum_deci);
    cout << sum_binary;

    return 0;
}