#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int m=n;
for(int i=1; i<=n; i++)
{
    for (int k = 1; k <=i; k++)
    {
       cout<<"*";
    }
for(int j=1; j<=(2*m-2); j++)
{
    cout<<" ";
}
m--;

for (int l = 1; l<=i; l++)
{
    cout<<"*";
}
cout<<"\n";
}

int x=1;
for(int a=n;a>=1;a--)
{
    for(int b=1;b<=a;b++)
    {
        cout<<"*";
    }
    for(int c=1;c<=(2*x-2);c++)
    {
     cout<<" ";
    }
     x++;
    for(int d=1;d<=a;d++)
    {
        cout<<"*";
    }
     cout<<"\n";
}
    return 0;
}