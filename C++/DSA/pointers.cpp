#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=10; // data variable
    int* p; // address variable. We can write int *p and int * p  as well. This only shows that p is a pointer variable
    p=&a; // Here pointer variable p stores the address of the variable 'a'
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl; // * is a dereferencing operator where p stores address of 'a' and dereferencing it gives the value of 'a'
}