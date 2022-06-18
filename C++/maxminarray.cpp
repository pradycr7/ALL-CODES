#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    
    }
    /* int maxNO=arr[0],minNO=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxNO)
        {
            maxNO=arr[i];
        }
      if (arr[i]<minNO)
        {
            minNO=arr[i];
        }  
      
    } */

int maxNO=INT_MIN; //INT_MIN is an inbuilt function in #include <climits>
int minNO=INT_MAX; //INT_MAX is an inbuilt function in #include <climits>
for(int i=0; i<n;i++)
{
    maxNO=max(maxNO,arr[i]); //max is an inbuilt function
    minNO=min(minNO,arr[i]); //min is an inbuilt function
}
     cout<<maxNO<<endl; 
cout<<minNO;
    
    


    return 0;
}