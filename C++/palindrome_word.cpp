#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];

    bool temp=0;

    cin>>arr;

   for (int i = 0; i < n; i++)
   {
        if (arr[i]==arr[n-1-i])
        {
            temp=1;
        }
        else
        {
            temp=0;
            break;
        }
       
   }

   if (temp==true)
   {
       cout<<"pallindrome";
   }
   else
   {
       cout<<"not a pallindrome";
   }
   
   
   
   
    
    



    return 0;
}