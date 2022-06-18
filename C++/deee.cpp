#include<bits/stdc++.h>
using namespace std;
 
// Computes sum all sub-array
long int SubArraySum(int arr[], int n)
{
    long int result = 0,temp=0;
 
    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        temp=0;
        for (int j=i; j<n; j++)
        {
            // sum subarray between current
            // starting and ending points
            cout<<arr[j]<<endl;
            temp+=arr[j];
            result += temp ;
        }
    }
    return result ;
}
 
// driver program to test above function
int main()
{
    int arr[] = {1, 2, 3,4} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Sum of SubArray : "
          << SubArraySum(arr, n) << endl;
    return 0;
}