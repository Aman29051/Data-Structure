#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *root;
struct node *newnode(int);
struct node * insertElement(struct node *,int);
int preorder(struct node *);
int inorder(struct node *);
int postorder(struct node *);
struct node * deletenode(struct node *,int);
struct node * minValueNode(struct node *);
int leafdeletion(int);
