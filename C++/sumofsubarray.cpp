#include<iostream>
using namespace std;

int sum_subarray(int arr[],int n )
{
int sum=0;
for (int i = 0; i <n; i++)
{
    for (int j = 0; j <=i; j++)
    {
        int l=j;
        for (int k =n-i; k >0; k--)
        {
        
            sum+=arr[l];
            l++;
         
        }
        
    }
    
}
return sum;
}

int maxi(int arr[],int n)
{
int max=arr[0];
for (int i = 0; i <n; i++)
{
    if(max<arr[i])
    max=arr[i];
    cout<<max;
}
}
int main(){

int n;
cin>>n;
int arr[n];
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
cout<<"The sum of subarray"<<endl;
cout<<sum_subarray(arr,n);

    return 0;
}