#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
for(int i=5; i>=1; i--)
{
    for(int j=(i-1); j>=0; j--)
    {
        cout<<" ";
    }
    for(int k=1;k<=n;k++)
    {
    cout<<"*";
    }
    cout<<"\n";
}
    return 0;
}