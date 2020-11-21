#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*tail;
int init();
int create(int);
int print();
int insertatbegginning(int);
int insertatlast(int);
int insertatposition(int,int);
int getlength();
