#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root;
struct node *create();
int inorder(struct node *);
int preorder(struct node *);
int postorder(struct node *);
