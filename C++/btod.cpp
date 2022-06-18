#include <iostream>
#include <cmath>
using namespace std;
int b_to_d(int num)
{
    int quo=num;
    int rem;

    int deci=0;
    int temp=0;
    while(quo>0)
    {
        rem=quo%10;
        deci+=rem*pow(2,temp);
        quo=quo/10;
        temp++;

    }
   // cout<<deci;
    


    return deci;
}



int main()
{
    int n;
    

    cin >> n;

    
   cout<< b_to_d(n);

    return 0;
}