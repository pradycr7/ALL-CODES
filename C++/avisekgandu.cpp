#include<iostream>
using namespace std;

int main(){

int rows,x;
cin>>rows>>x;
int arr[rows][rows];
for (int i = 1; i <= rows; i++)
{
int j=i,k=1;
while(j>0)
{


arr[k][j]=x;
j--;
k++;
 x++;   
}
}

for (int i = 1; i <= rows-1; i++)
{
  int j=rows,k=i+1;
  while( k<=rows)
{


arr[k][j]=x;
j--;
k++;
 x++;   
}
}



for (int i = 1; i <=rows; i++)
{
  for (int j = 1; j <=rows; j++)
  {
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}

    return 0;
}