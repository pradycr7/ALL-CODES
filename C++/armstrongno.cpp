#include<iostream>
using namespace std;

int main(){

int n,r,sum=0;
cin>>n;
int q=n;
while(q!=0)
{
    r=q%10;
    sum=sum+(r*r*r);
    q=q/10;
}
if(n==sum)
cout<<"armstong num";
else
cout<<"not armstong num";
    return 0;
}