
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int lhs;
    int rhs;

    for (int i = 1; i < 1000; i++)
    {
        a = i;
        for (int j = 1; i < 1000; i++)
        {
            b = j;
            for (int k = 1; i < 1000; i++)
            {
                c = k;
                lhs = (a * a) + (b * b);
                rhs = c * c;
                if (lhs == rhs)
                {
                    cout << a << b << c << endl;
                }
            }
        }
    }
}
