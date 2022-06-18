#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    int i = 0;
    int counter = 0;
    while (str1[i] != '\0')
    {
        counter++;
        i++;
    }
    int j = 0;
    int counter2 = 0;
    while (str2[j] != '\0')
    {
        counter2++;
        j++;
    }
    if (counter != counter2)
    {
        printf("different\n");
    }
    else
    {
        for (int k = 0; k < counter2; k++)
        {
            if (str1[k] == str2[k])
            {
                printf("same\n");
                return 0;
            }
            else
            {
                printf("different\n");
                return 0;
            }
        }
    }
    return 0;
}