#include <iostream>
#include <cmath>
using namespace std;
int d_to_o(int num)
{
    int quo=num;
    int rem;

    int deci=0;
    int temp=0;
    while(quo>0)
    {
        rem=quo%8;
        deci+=rem*pow(10,temp);
        quo=quo/8;
        temp++;

    }
   // cout<<deci;
    


    return deci;
}



int main()
{
    int n;
    

    cin >> n;

    
   cout<< d_to_o(n);

    return 0;
}