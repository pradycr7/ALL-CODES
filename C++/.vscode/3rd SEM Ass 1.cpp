/* Call by Value */

#include <bits/stdc++.h>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main(){
    //code goes here
    int a,b;
    cin>>a>>b;
    cout<<"The Sum Is:"<< add(a,b);
    return 0;
}


/* Call by Reference */

#include <bits/stdc++.h>
using namespace std;
int add(int* a , int* b){
    return (*a+*b);
}
int main(){
    //code goes here
    int a,b;
    cin>>a>>b;
    cout<<"The Sum Is:"<< add(&a,&b);
    return 0;
}
