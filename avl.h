#include <stdio.h>
#include <stdlib.h>

// Create Node
struct Node {
  int key;
  struct Node *left;
  struct Node *right;
  int height;
};

int max(int,int);
int height(struct Node *);
struct Node *newNode(int);
int getBalance(struct Node *);
struct Node *rightRotate(struct Node *);
struct Node *leftRotate(struct Node *);
struct Node *insertNode(struct Node *, int);
struct Node *minValueNode(struct Node *);
struct Node *deleteNode(struct Node *, int);
void printPreOrder(struct Node *);
