#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a=1,b=2;
    int sum=0;
    int even_sum=b;
  while(sum<(4*pow(10,6)))
  {
      sum=a+b;
      a=b;
      b=sum;
if(sum%2==0)
even_sum+=sum;
  }
  cout<<even_sum;
    return 0;
}