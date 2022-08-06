#include <bits/stdc++.h>
using namespace std;

void swap(int& x,int& y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main() {
    int a,b;
    cin>>a>>b;
    swap(a,b); // It only passes the value to the given function but in that function its taking the address of .. 
    cout<<a<<" "<<b; // .. the variable a and b thereby changing the actual parameters

}