#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a=0,b=1;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<",";
sum=a+b;
a=b;
b=sum;
    }
    return 0;
}

int main(){

int num;
cin>>num;
fibonacci(num);
    return 0;
}