#include <bits/stdc++.h>
using namespace std;

void swap(int x,int y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main() {
    int a,b;
    cin>>a>>b;
    swap(a,b); // It only passes the value to the given function without changing its actual parameters
    cout<<a<<" "<<b;
}