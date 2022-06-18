#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T!=0)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
int maxW=INT_MIN;
maxW=max((7*x),((d*y)+(z*(7-d))));
cout<<maxW<<endl;
T--;
    }
    return 0;
}