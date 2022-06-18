#include<iostream>
using namespace std;

int arithmatic_subarray(int arr[],int n )
{
  int count=0,temp=0;  
int diff=arr[1]-arr[0];
for (int i = 0; i <n-1; i++)
{
    int j=i+1;
    
        
        if((arr[j]-arr[i])==diff)
        {
            count++;
        }





     else
        {
        if(count>temp)
       {
            temp=count; 
       }
        count=1;
        diff=arr[j]-arr[i];
        }
    
}
return (temp+1);
}



int main(){

int n;
cin>>n;
int arr[n];
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
cout<<"The length of largest arithmatic subarray"<<endl;
cout<<arithmatic_subarray(arr,n);

    return 0;
}