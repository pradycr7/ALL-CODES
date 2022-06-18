#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define initial 1
#define visited 2
int adj[MAX][MAX] , n ;
int state[MAX] , stack[MAX] , top = -1;
void DFS_Traversal() ;
void DFS(int v);
void push(int v) ;
int pop() ;
int isEmpty() ;
void createGraph() {
    n = 5 ;
    adj[0][1] = 1 ;
    adj[1][2] = 1 ;
    adj[1][4] = 1 ;
    adj[2][3] = 1 ;
    adj[3][0] = 1 ;
    adj[3][1] = 1 ;
    adj[4][3] = 1 ;
}
void main() {
    createGraph() ;
    printf("DFS:\nStarting at node 0:\n");
    DFS_Traversal() ;
    DFS(0);
    printf("Starting at node 3:\n");
    DFS_Traversal() ;
    DFS(3);
}
void DFS_Traversal() {
    for(int v = 0 ; v < n ; v++ ) 
        state[v] = initial ;
}
void DFS(int v ) {
    int i ;
    push(v) ;
    while(!isEmpty() ) {
        v = pop() ;
        if(state[v] == initial) {
            printf("%d\n",v) ;
            state[v] = visited ;
        }
        for(i = n-1 ; i >= 0 ; i--)
            if(adj[v][i] == 1 && state[i] == initial)
                push(i);
    }
}
void push(int v) {
    if(top == MAX - 1) {
        printf("Stack OverFlow.\n");
        return ;
    }
    top++ ;
    stack[top] = v ;
}
int pop() {
    int v ; 
    if(top == -1 ) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    v = stack[top] ;
    top-- ;
    return v ;
}
int isEmpty() {
    if(top == -1 )
        return 1 ;
    return 0 ;
}