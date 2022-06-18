#include<stdio.h>
int main(){
    int triplet[3][7] = 
    {
        {0,0,1,1,2,3,3}, 
        {2,4,3,4,3,1,2},
        {4,5,3,6,2,2,3}
    };
    int arr[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=0;
        }
    }
    for(int j=0;j<7;j++){
        int i=0;
        arr[triplet[i][j]][triplet[i+1][j]]=triplet[i+2][j];
    }
    int trans[5][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            trans[j][i] = arr[i][j];
        }
    }
    printf("The transpose of the above matrix is:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    int counter=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if (trans[i][j]!=0){
                counter++;
            }
        }
    }
    int rarr[3][counter];
    int k=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if (trans[i][j]!=0){
                rarr[0][k] = i;
                rarr[1][k] = j;
                rarr[2][k] = trans[i][j];
                k++;
            }
        }
    }
    printf("Triplet Table:\n");
    printf("ROW\tCOLUMN\tValues\n");
    for(int i=0;i<k;i++)
    {
        printf("%d\t%d\t%d\n",rarr[0][i],rarr[1][i],rarr[2][i]);
    }
    printf("Transposed Triplet Table:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<counter;j++){
            printf("%d ",rarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}