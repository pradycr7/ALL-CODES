#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int n, int arr[], int key)
{
for (int i = 0; i < n; i++)
{
    if(arr[i]==key)
    return i;
}

return -1;


}


int binarySearch(int n, int arr[], int key)
{
    int s=0,e=n-1,mid; //e=n also gives same
while(s<=e)
{
    mid=(s+e)/2;
if(arr[mid]==key)
{
    return mid;
}
else if(arr[mid]>key)
{
    e=mid-1;
}
else{
    s=mid+1;
}
}
return -1;


}


int main(){
    int n,num;
    cin>>n>>num;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    
    }
cout<<binarySearch(n,arr,num);




     
    
    


    return 0;
}