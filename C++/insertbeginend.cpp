#include <iostream>
#include <climits>
using namespace std;

 void insert(int arr[], int n,int n1,int n2)
{
   
   for(int i = n; i >=1; i--)
   {
       
       arr[i]=arr[i-1];
       
   }
   arr[0]=n1;
   arr[n+1]=n2;
   

   for (int i = 0; i < n+2; i++)
   {
      cout<< arr[i]<<" ";
   }
   
   
   
    


    return ;
}

int main()
{

    int n;
    cin >> n;
    int arr[n+2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int n1,n2;
    cout<<"Enter the elements to insert"<<endl;
    cin>>n1>>n2;
   
    
   cout<<"array after insertion"<<endl;
    insert(arr, n,n1,n2);

    return 0;
}