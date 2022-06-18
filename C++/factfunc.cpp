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
cout<<"factorial of "<<n<<" is "<<fac;
}
else 
cout<<"factorial of "<<n<<" is 1";
    
    return 0;
}

int main(){

int num;
cin>>num;
fact(num);
    return 0;
}