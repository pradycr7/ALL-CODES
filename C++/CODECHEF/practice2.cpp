#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int num,count=0;
    while(n>0)
    {
        cin>>num;
        if(num%k==0)
        {
            count++;
        }
        n--;
    }
    cout<<count;
    return 0;
}