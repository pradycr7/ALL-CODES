#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n,num;
    cin>>n>>num;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    
    }
for (int i = 0; i < n; i++)
{
    if(arr[i]==num)
    cout<<"matched"<<endl;
}


     
    
    


    return 0;
}