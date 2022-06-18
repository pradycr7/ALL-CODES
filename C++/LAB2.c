#include<stdio.h>
#include <stdlib.h>
int linearSearch(int n, int arr[], int key)
{
for (int i = 0; i < n; i++)
{
    if(arr[i]==key)
    return i;
}

return -1;


}

int main(){

    int n,a,b;
    int temp;
    int i1,i2;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
    

    printf("Enter the first element to be swapped:\n");
    scanf("%d", &a);
    i1=linearSearch(n,arr,a);

     printf("Enter the second element to be swapped:\n");
    scanf("%d", &b);
    i2=linearSearch(n,arr,b);
  

     temp = arr[i1];
    arr[i1] = arr[i2];
    arr[i2] = temp;
printf("Array after swapping:");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}