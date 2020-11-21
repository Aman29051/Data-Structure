#include <stdio.h>
#include <stdlib.h>
#include"doublly.h"

int init(){
    head==NULL;
    return 0;
}
int create(int element){
    struct node *newnode,*temp;
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        //temp=newnode;
    }
    return 0;
}
int insertAtBeginning(int element){
    struct node *newnode,*temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        newnode->next=temp;
        temp->prev=newnode;
        head=newnode;
    }
    return 0;
}
int insertAtPos(int position,int element){
    struct node *newnode,*temp=head;
    int i=1;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=NULL;
    newnode->prev=NULL;
    while(i<position-1){
        i++;
        temp=temp->next;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    return 0;
}
int deleteAtBeginning(){
    struct node *temp=head;
    if(head==NULL){
        printf("Can't Delete!!\n");
    }
    else{
        head=head->next;
        head->prev=NULL;
        free(temp);
    }
    return 0;
}
int deleteAtPos(int position){
    struct node *temp=head;
    int i=1;
    if(head==NULL){
        printf("Can't Delete because List is empty!\n");
    }
    else if(position==1){
        deleteAtBeginning();
    }
    else if(position==length()){
        deleteLast();
    }
    else{
        while(i<position){
        temp=temp->next;
        i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
    return 0;
}
int deleteLast(){
    struct node *temp=head;
    if(head==NULL){
        printf("Can't Delete because List is empty!\n");
    }
    else{
        while(temp->next!=0){
        temp=temp->next;
        }
        temp->prev->next=NULL;
        free(temp);
    }
    return 0;
}
int print(){
    struct node *temp=head;
    if(head==NULL){
        printf("LIST IS EMPTY.\n");
    }
    else{
        while(temp!=0){
        printf("%d->",temp->data);
        temp=temp->next;
        }
        printf("NULL\n");
    }
    return 0;
}
int length(){
    struct node *temp=head;
    int count=0;
    while(temp!=0){
        count++;
        temp=temp->next;
    }
    printf("Length of Linked list is %d\n",count);
    return count;
}
int reverseList(){
    struct node *pre,*current,*nextnode;
    pre=NULL;
    current=head;
    while(current!=0){
        pre=current;
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
    }
    head=pre;
    return 0;
}
int searchElement(int ele){
    struct node *temp=head;
    int count=1,i=0;
    while(temp!=0){
        if(temp->data==ele){
            printf("%d found at position %d\n",temp->data,count);
            i++;
        }
        temp=temp->next;
        count++;
    }
    if(i==0){
        printf("Element not found!\n");
    }
    return 0;
}
int destroy(){
    head=NULL;
    return 0;
}
