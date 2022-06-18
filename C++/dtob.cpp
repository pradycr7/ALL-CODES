#include <iostream>
#include <cmath>
using namespace std;
int d_to_b(int num)
{
    int quo=num;
    int rem;

    int deci=0;
    int temp=0;
    while(quo>0)
    {
        rem=quo%2;
        deci+=rem*pow(10,temp);
        quo=quo/2;
        temp++;

    }
   // cout<<deci;
    


    return deci;
}



int main()
{
    int n;
    

    cin >> n;

    
   cout<< d_to_b(n);

    return 0;
}