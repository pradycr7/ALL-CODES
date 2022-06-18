#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin >> T;
    int N[T];
    int temp;
    for (int i = 0; i < T; i++)
    {
        cin>>N[i];
    }
    for (int i = 0; i < (T-1); i++)
    {
        for (int j = (i+1); j < T; j++)
        {
            if(N[j]<N[i])
            {
                temp=N[i];
                N[i]=N[j];
                N[j]=temp;
            }
        }

    }
    for (int i = 0; i < T; i++)
    {
        cout<<N[i]<<endl;
    }
    
    

    
    return 0;
}