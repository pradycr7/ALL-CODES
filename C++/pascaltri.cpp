#include<iostream>
#include<cmath>
using namespace std;

int fact(int n)
{
   int fac=1;
if(n>0)
{
   for(int i=n;i>=1;i--)
   {
       fac=fac*i;
   }
   return fac;
}
else 
return 1;
}


int pascal(int n)
{
    int diff,nCr;
    for(int i=0;i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            diff=i-j; 
            nCr=fact(i)/(fact(diff)*fact(j));
            cout<<nCr<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

int main(){

int num;
cin>>num;
pascal(num);
    return 0;
}