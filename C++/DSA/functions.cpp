#include <bits/stdc++.h>
using namespace std;

int square(int num) {
    int sq=num*num;
    return sq;
}

int even(int number) {
    if(number%2==0)
    cout<<"even"; 
    else 
    cout<<"odd";
}

int main() {
    int a;
    cin>>a;
    cout<<square(a)<<endl;
    even(a);
}