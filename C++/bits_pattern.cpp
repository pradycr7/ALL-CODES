#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
for(int i=1; i<=n; i++)
{
    for (int j = i; j >=1; j--)
    {
        if(j%2==0)
        cout<<"0"<<" ";
        else
        cout<<"1"<<" ";
    }
    cout<<"\n";
}
    return 0;
}