#include<iostream>
using namespace std;

int swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swap "<<a<<" "<<b;
    return 0;
}
int main(){

int n1,n2;
cin>>n1>>n2;
cout<<"before swap "<<n1<<" "<<n2<<endl;
swap(n1,n2);
    return 0;
}