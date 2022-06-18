void change(int[]);
int main()
{
    int a[3]={20,30,40};
    change(a);
    printf("%d%d",*a,a[0]);

}
void change(int a[]){
   a[0]=10; 
}
