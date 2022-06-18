#include <iostream>
#include <climits>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int max_pfac=INT_MIN;
int count;
for (long long int i = 1; i <= n; i++)
{
    if(n%i==0)
    {
        count=0;
        for (long long int j = 1; j <= i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            max_pfac=max(max_pfac,i);
        }
    }
}
cout<<max_pfac;

return 0;

}