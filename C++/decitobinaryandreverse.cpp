#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter the decimal number" << endl;
    int deci;
    cin >> deci;
    int remi,quo=deci,bin=0,temp=0;
    while(quo!=0)
    {
     remi=quo%2;
     bin+=remi*pow(10,temp);
     quo=quo/2;
     temp++;
    }
cout<<bin<<endl;



    int count = 0;

    cout << "enter the binary number" << endl;
    int bia;
    cin >> bia;
    int dec = 0;

    int r, q = bia;
    while (q != 0)
    {
        r = q % 10;
        dec += r * pow(2, count);
        q = q / 10;
        count++;
    }
    cout << dec;

    return 0;
}