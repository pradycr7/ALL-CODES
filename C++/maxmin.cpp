#include<iostream>
using namespace std;

int max(int a, int b , int c )
{
    int maxi;
    if(a>b && a>c)
    maxi=a;
    else if(b>a && b>c)
    maxi=b;
    else
    maxi=c;
    cout<<maxi<<endl;
    return 0;
}
int min(int a, int b, int c )
{
    int mini;
    if(a<b && a<c)
    mini=a;
    else if(b<a && b<c)
    mini=b;
    else 
    mini=c;
    cout<<mini<<endl;
    return 0;
}

int main(){

int a,b,c;
cin>>a>>b>>c;
cout<<"maximum among 3 nos. ";
max(a,b,c);
cout<<"minimum among 3 nos. ";
min(a,b,c);
    return 0;
}