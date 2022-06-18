#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
for(int i=1; i<=n; i++)
{
    for(int j=1; j<=n-i; j++)
    {
        cout<<"  ";
    }
    for(int k=i;k>=1;k--)
    {
    cout<<"*"<<" ";
    }
    if(n>=2)
    {
      for(int l=2; l<=i;l++)
      {
          cout<<"*"<<" ";
      }
    }
    cout<<"\n";
}


/* for(int a=n; a>=1;a--)
{
for(int b=a;b<=(n-1); b++)
{
cout<<"  ";
}
for(int c=a; c>=1; c--)
{
    cout<<"*"<<" ";
}
for(int d=1; d<=(a-1); d++)
{
    cout<<"*"<<" ";
}
cout<<"\n";
} */
for(int i=n; i>=1; i--)
{
    for(int j=1; j<=n-i; j++)
    {
        cout<<"  ";
    }
    for(int k=i;k>=1;k--)
    {
    cout<<"*"<<" ";
    }
    if(n>=2)
    {
      for(int l=2; l<=i;l++)
      {
          cout<<"*"<<" ";
      }
    }
    cout<<"\n";
}

    return 0;
}