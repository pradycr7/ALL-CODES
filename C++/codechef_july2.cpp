#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int g,c;
        cin>>g>>c;
        int h=(c*c)/(2*g);
        cout<<h<<endl;
        T--;
    }
    return 0;
}