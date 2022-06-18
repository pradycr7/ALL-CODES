#include <iostream>
#include <climits>
using namespace std;

  void del(int arr[], int n)
{
   
   for(int i =0; i<n; i++)
   {
       
       arr[i]=arr[i+1];
       
   }
  
   

   for (int i = 0; i < n-2; i++)
   {
      cout<< arr[i]<<" ";
   }
   
   
   
    


    return ;
} 

int main()
{

   int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
   
    
   cout<<"array after deletion"<<endl;
    del(arr, n); 
 
    return 0;
}