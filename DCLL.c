#include <stdio.h>
#include <stdlib.h>
#include"DCLL.h"
int init(){
    head=NULL;
    return 0;
}
int create(int element){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    if(head==NULL){
        head=tail=newnode;
        newnode->next=head;
        newnode->prev=head;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;
    }
    return 0;
}
int print(){
    struct node *temp;
    if(head==NULL){
        printf("List is empty!\n");
    }
    else{
        temp=head;
        while(temp!=tail){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
    return 0;
}
int insertatbegginning(int element){
    struct node *temp,*newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    if(head==NULL){
        printf("List is empty!\n");
    }
    else{
        temp=head;
        head=newnode;
        newnode->prev=tail;
        newnode->next=temp;
        tail->next=newnode;
    }
    return 0;
}
int insertatlast(int element){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    if(head==NULL){
        printf("List is empty!\n");
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;
    }
    return 0;
}
int insertatposition(int position,int element){
    struct node *temp,*newnode;
    int i=1;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    if(head==NULL){
        printf("List is empty!\n");
    }
    else if(position==1){
            insertatbegginning(element);
    }
    else if(position==getlength()){
            insertatlast(element);
    }
    else{
        temp=head;
        while(i<position-1){
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
    }
    return 0;
}
int getlength(){
    struct node *temp;
    int count=0;
    if(head==NULL){
        return 0;
    }
    else{
        temp=head;
        while(temp!=tail){
            count++;
            temp=temp->next;
        }
        //printf("Length : %d\n",count+1);
    }
    return count;
}
