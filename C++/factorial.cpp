#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int fac=1;
if(n>0)
{
   for(int i=n;i>=1;i--)
   {
       fac=fac*i;
   }
cout<<"factorial of "<<n<<" is "<<fac;
}
else 
cout<<"factorial of "<<n<<" is 1";
    return 0;
}