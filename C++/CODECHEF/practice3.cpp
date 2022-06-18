#include <bits/stdc++.h>
using namespace std;
int main()
{
   int  T;
   int a,b;
   cin>>T;
   int sum[T];
  for(int i=0;i<T;i++)
  {
      cin>>a>>b;
      sum[i]=a+b;

  }
for(int i=0;i<T;i++)
{
    cout<<sum[i]<<endl;
}
    return 0;
}