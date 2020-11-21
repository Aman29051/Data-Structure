#include <stdio.h>
#include <stdlib.h>
#include"BST.h"
struct node *newnode(int ele){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=ele;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
};
struct node * insertElement(struct node *root,int element){
    if(root==NULL)
        return newnode(element);

    else if(element<root->data)
        root->left=insertElement(root->left,element);

    else if(element>root->data)
        root->right=insertElement(root->right,element);

    return root;
}

struct node* minValueNode(struct node* node){
    struct node *current=node;
    while(current&&current->left!=NULL){
        current=current->left;
    }
    return current;
}

struct node * deletenode(struct node *root,int key){
    if(root==NULL)
        return root;
    if(key<root->data){
        root->left=deletenode(root->left,key);
    }
    else if(key>root->data){
        root->right=deletenode(root->right,key);
    }
    else{
        if(root->left==NULL){
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct node *temp=root->left;
            free(root);
            return temp;
        }

        struct node *temp=minValueNode(root->right);
        root->data=temp->data;
        root->right=deletenode(root->right,temp->data);
    }
    //printf("\n%d\n",root);
    return root;
}
int preorder(struct node *root){
    if(root==0)
        return 0;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    return 0;
}
int inorder(struct node *root){
    if(root==0)
        return 0;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
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
