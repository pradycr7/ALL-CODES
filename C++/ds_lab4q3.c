#include <stdio.h>
int main()
{
    char str1[100] = "education";
    char str2[] = "alists";
    int x = 0;
    int m = 0;
    while (str1[x] != '\0')
    {
        m++;
        x++;
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        str1[m] = str2[i];
        m++;
    }
    str1[m] = '\0';
    puts(str1);
    return 0;
}