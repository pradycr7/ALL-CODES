#include<iostream>
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

int main(){

int n,r,dif,nCr;
cin>>n>>r;
dif=n-r; 
nCr=fact(n)/(fact(dif)*fact(r));
cout<<nCr;
    return 0;
}