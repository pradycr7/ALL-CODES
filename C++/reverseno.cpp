#include<iostream>
#include<cmath>
using namespace std;

int main(){

int n;
cin>>n;
int q=n,r,rev=0,count=0;
int t=n;
while(t!=0)
    { 
          t=t/10;
          count++;
    }
    count--;
while(q!=0)
{
    
    r=q%10;
    rev+=r*pow(10,count);
    q=q/10;
    count--;
}
cout<<n<<"and reverse is "<<rev;
    return 0;
}