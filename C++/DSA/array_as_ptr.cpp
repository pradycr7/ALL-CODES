#include <bits/stdc++.h>
using namespace std;

void fun(int A[],int n) { // Here A[] is the pointer variable as array itself is a pointer OR we can use int* A
    int i;
    for(int i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }
}

int main() {
     int A[5]={2,4,6,8,10};
     fun(A,5); //  'A' means it is a address variable passing the base address of an array. It can be written as &A[0]
}