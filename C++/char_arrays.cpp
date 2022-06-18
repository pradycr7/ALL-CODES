#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
     
   char arr[n+1];
char reve[n+1];
    cin>>arr;

for (int i = 0; i < n; i++)
{
    

          reve[i]=arr[n-1-i]; 
reve[n]='\0';
}
cout<<reve;

 if(reve==arr)
cout<<"palindrome";
else 
cout<<"not palindrome"; 
    return 0;
}