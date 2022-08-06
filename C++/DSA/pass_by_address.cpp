#include <bits/stdc++.h>
using namespace std;

void swap(int* x,int* y) {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
    int a,b;
    cin>>a>>b;
    swap(&a,&b); // Here we pass the address so that we can change the actual parameters in the main function as ..
    cout<<a<<" "<<b; // .. the function has pointer variables in its arguement to point it to the variables address
}