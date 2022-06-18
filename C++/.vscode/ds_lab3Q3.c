#include <stdio.h>
int main() {
    int i , j ;
    int matrix[4][5] ;
    int r[] = {0,0,1,1,2,3,3} , c[] = {2,4,3,4,3,1,2} , v[] = {4,5,3,6,2,2,3} ;
    for(i = 0 ; i < 4 ; i++ )
        for(j = 0 ; j < 5 ; j++)
            matrix[i][j] = 0 ;
    for(i = 0 ; i < sizeof(r)/sizeof(int); i++) 
        matrix[r[i]][c[i]] = v[i] ;
    for(i = 0 ; i < 4 ; i++ ) {
        for(j = 0 ; j < 5 ; j++)
            printf("%d\t",matrix[i][j]);
        printf("\n");
    }
    return 0 ;
}