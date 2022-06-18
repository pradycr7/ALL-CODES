#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,q,sum;
    int count;
    int end;
    int T;
    cin >> T;
   
    while (T > 0)
    {
        count=0;
       cin>>N;
       q=N;
       while(q>0)
       {
           count++;
           q=q/10;
       }
       end=N/(pow(10,count-1));
       sum=(N%10) + (end%10);

     cout<<sum<<endl;

        T--;
    }

    return 0;
}