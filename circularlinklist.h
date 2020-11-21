#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *tail;
int init();
int create(int);
int print();
int insertAtBeginning(int);
int insertAtEnd(int);
int insertAtPos(int,int);
int deleteAtBeginning();
int deleteAtEnd();
int deletebypos(int);
int getlength();
int reverseCLL();
