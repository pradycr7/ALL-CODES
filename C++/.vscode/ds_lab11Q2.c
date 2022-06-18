#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define initial 1
#define waiting 2
#define visited 3
int adj[MAX][MAX] , n ;
int state[MAX] , queue[MAX] , front = -1 , rear = -1;
void BFS_Traversal() ;
void BFS(int v);
void insertQueue(int v);
int deleteQueue() ;
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
    printf("BFS:\nStarting at node 0:\n");
    BFS_Traversal() ;
    BFS(0);
    printf("Starting at node 3:\n");
    BFS_Traversal() ;
    BFS(3);
}
void BFS_Traversal() {
    for(int v = 0 ; v < n ; v++ )
        state[v] = initial ;
}
void BFS(int v ) {
    int i ;
    insertQueue(v) ;
    state[v] = waiting ;
    while(!isEmpty()) {
        v = deleteQueue() ;
        printf("%d\n",v);
        state[v] = visited ;
        for(i = 0 ; i < n ; i++) {
            if(adj[v][i] ==1 && state[i] == initial) {
                insertQueue(i);
                state[i] = waiting ;
            }
        }
    }
}
void insertQueue(int v) {
    if(rear == MAX -1 )
        printf("Queue Overflow.\n");
    else {
        if(front == -1)
            front = 0 ;
        rear = rear + 1 ;
        queue[rear] = v ;
    }
}
int isEmpty() {
    if(front == -1 || front > rear)
        return 1;
    return 0 ;
}
int deleteQueue() {
    int del ;
    if(front == -1 || front >rear) {
        printf("Queue Underflow.\n");
        exit(1);
    }
    del = queue[front++];
    return del ;
}