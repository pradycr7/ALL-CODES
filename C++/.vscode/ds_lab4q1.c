#include <stdio.h>
int main()
{
    char ch[]="pneumonoultramicroscopicsilicovolcanoconiosis";
    int i=0;
    int counter=0;
    while(ch[i]!='\0')
    {
        counter++;
        i++;
    }
    printf("the number of characters are : %d ",counter);
    return 0;
}