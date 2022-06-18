#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int size ;
struct Node {
    struct Node *left ;
    int value ;
    struct Node *right ;
};
struct Node *newNode(int i) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->value = i ;
    newNode->left = newNode->right = NULL ;
    return newNode;
}
struct Node* insertLevelOrder(int ar[], struct Node* root,int i, int n){
    if (i < n) {
        struct Node *temp = newNode(ar[i]);
        root = temp;
        root->left = insertLevelOrder(ar,root->left, 2 * i + 1, n);
        root->right = insertLevelOrder(ar,root->right, 2 * i + 2, n);
    }
    return root;
}
struct Node *insert(struct Node *Node, int value){
    if (Node==NULL)
    {
        Node = newNode(value);
    }
    else {
        if (Node->value > value)
            Node->left = insert(Node->left, value);
        else
            Node->right = insert(Node->right, value);
    }
    return Node;
}
void disp(int ar[], int size) {
    int nLevel = (int)ceil(log(size+1)/log(2)), t = 0 , temp = 30 ;
    for(int i = 0 ; i < nLevel ; i++) {
        for(int spaces = 0 ; spaces < (nLevel - i)*(nLevel - i - 1) ; spaces++)
            printf(" ");
        for(int j = 0 ; j < pow(2,i) ; j++) {
            if(t == size)
                break; 
            printf("%d",ar[t++]);
            for(int i = 1 ; i <= temp ; i++)
                printf(" ");
        }
        temp = ( temp - 2 ) / 2 ;
        printf("\n");
    }
}
void inOrder(struct Node* root){
    if (root != NULL) {
        inOrder(root->left);
        printf("%d\n",root->value);
        inOrder(root->right);
    }
}
void preOrder(struct Node *root) {
    if(root == NULL) return;
    printf("%d\n",root->value); 
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct Node *root) {
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d\n",root->value);
}
int main() {
    struct Node *root = NULL ;
    int elements[] = {10,53,11,34,89,33,78,23,55,84,22,37,22};
    size = sizeof(elements)/sizeof(int);
    root = insertLevelOrder(elements,root,0,size);
    insert(root,50);
    elements[size] = 50 ;
    size++;
    printf("Tree:\n");
    disp(elements,size);
    //print2D(root,5);
    printf("Inorder traversal:\n");
    inOrder(root);
    printf("Preorder traversal:\n");
    preOrder(root);
    printf("Postorder traversal:\n");
    postOrder(root);
}