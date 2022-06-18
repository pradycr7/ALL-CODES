#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
	int arr[n];
	for(int i=0;i<n;i++)
    {
	cin>>arr[i];
    }
	int idx;
	cin>>idx;
	
	for(int i=idx;i<n;i++)
	{
	    arr[i]=arr[i+1];
	}
	n--;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	
	return 0;
}