#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=10;
    int& r=a; // It is a reference variable. Here we can also use int &r or int & r. 
    cout<<a<<" ";
    cout<<r<<" ";
    cout<<&r;
}