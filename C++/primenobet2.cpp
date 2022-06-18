#include<iostream>
#include<cmath>
using namespace std;
int prime(int a, int b)
{

    for(int j=a;j<=b;j++)
    {
         int count=0;
    for(int i=1; i<=j; i++)
    {
        if(j%i==0)
        count++;
    }
    if(count==2)
    cout<<j<<"  ,";
}
return 0;
}


int main(){
int n1,n2;
cin>>n1>>n2;
prime(n1,n2);
    return 0;
}