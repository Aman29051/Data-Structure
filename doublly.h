#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
int init();
int create(int);
int insertAtBeginning(int);
int insertAtPos(int,int);
int deleteAtBeginning();
int deleteAtPos(int);
int reverseList();
int searchElement(int);
int deleteLast();
int print();
int length();
int destroy();
