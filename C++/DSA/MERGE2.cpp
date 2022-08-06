#include <stdlib.h>
#include <stdio.h>

int* Merge2Arrays(int* A, int* B) {
    int size=10;
    int* C;
    C=(int*)malloc(size*sizeof(int));
    int i=0;
    int j=0;
    int k=0;
    while(i<5 && j<6) {
        if(A[i]<B[j])
        C[k++]=A[i++];
        else
        C[k++]=B[j++];
    }
for(;i<5;i++) {
    C[k++]=A[i];
}
for(;j<6;j++) {
    C[k++]=B[j];
}

return C;
}

int main() {
    int A[5]={1,4,7,11,45};
    int B[6]={2,6,7,25,50,75};
    int* C=Merge2Arrays(A,B);
    for(int i=0; i<11; i++){
        printf("%d ",C[i]);
    }
    
}