#include <stdio.h>
int check(char c[], char d[], int i, int j)
{
    if ((i == 0 && j == 0) || j == 0)
        return 1;
    if (i == 0)
        return 0;
    if (c[i - 1] == d[j - 1])
        return check(c, d, i - 1, j - 1) + check(c, d, i - 1, j);
    else
        return check(c, d, i - 1, j);
    return 0;
}
int main()
{
    int m = 0, n = 0;
    char a[] = "MATHEMATICS";
    char b[] = "MAT";
    int x = 0;
    while (a[x] != '\0')
    {
        m++;
        x++;
    }
    int y = 0;
    while (b[y] != '\0')
    {
        n++;
        y++;
    }
    printf("%d", check(a, b, m, n));
    return 0;
}
