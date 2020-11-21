#include <stdio.h>
#include <stdlib.h>
#include"binarytree.h"
struct node *create(){
    struct node *newnode;
    int x;
    newnode=(struct node *)malloc(sizeof(struct node));
    //printf("Enter data(-1 for no node): ");
    scanf("%d",&x);
    if(x==-1)
        return 0;
    newnode->data=x;
    printf("Enter left child of %d(-1 for no node): ",x);
    newnode->left=create();
    printf("Enter right child of %d(-1 for no node): ",x);
    newnode->right=create();
    return newnode;
}

int inorder(struct node *root){
    if(root==0)
        return 0;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    return 0;
}

int preorder(struct node *root){
    if(root==0)
        return 0;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    return 0;
}
int postorder(struct node *root){
    if(root==0)
        return 0;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
    return 0;
}
