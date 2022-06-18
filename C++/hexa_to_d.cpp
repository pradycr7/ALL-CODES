#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 int hexd_to_d(string n)
{
    int deci=0;
    int temp=0;
    int z=n.size();
    for (int i = z-1; i >= 0; i--)     
    {
        if (n[i]>='0'&&n[i]<='9')
        {
            deci+=(n[i]-'0')*pow(16,temp);
            

            
        }
        else if(n[i]>='A'&&n[i]<='F')
        {
            deci+=(n[i]-'A'+10)*pow(16,temp);
            
        } 
        temp++;

        
    }
    cout<<deci;
   
   
    


    return 0 ;
} 



int main()
{
    string n;
    

    cin >> n;
    
    

    
   hexd_to_d(n);

    return 0;
}