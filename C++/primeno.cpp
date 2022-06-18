#include<iostream>
using namespace std;

int main(){

int count=0;
int n;
cin>>n;
for (int i = 1; i <=n; i++)
{
   if(n%i==0)
   {
       count++;
   }
}
if(count==2)
{
cout<<n<<" is a prime number";
}
else
cout<<n<<" is not a prime number";
    return 0;
}