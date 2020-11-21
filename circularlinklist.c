#include <stdio.h>
#include <stdlib.h>
#include"circularlinklist.h"
int init(){
    tail=NULL;
    return 0;
}
int create(int element){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=0;
    if(tail==NULL){
        tail=newnode;
        tail->next=newnode;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }

    return 0;
}
int insertAtBeginning(int element){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=0;
    if(tail==NULL){
        tail=newnode;
        tail->next=newnode;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
    }
    return 0;
}
int insertAtEnd(int element){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=0;
    if(tail==NULL){
        tail=newnode;
        tail->next=newnode;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
    return 0;

}
int insertAtPos(int position,int element){
    struct node *newnode,*temp;
    int i=1;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=0;
    if(tail==NULL){
        tail=newnode;
        tail->next=newnode;
    }
    else if(position==1){
        insertAtBeginning(element);
    }
    else{
        temp=tail->next;
        while(i<position-1){
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return 0;
}
int deleteAtBeginning(){
    struct node *temp;
    if(tail==NULL){
        printf("List is Empty, Can't Delete!!!\n");
    }
    else{
        temp=tail->next;
        tail->next=temp->next;
        free(temp);
    }
    return 0;
}
int deleteAtEnd(){
    struct node *current,*pre;
    if(tail==NULL){
        printf("List is Empty, Can't Delete!!!\n");
    }
    else{
        pre=NULL;
        current=tail->next;
        while(current->next!=tail->next){
            pre=current;
            current=current->next;
        }
        pre->next=current->next;
        tail=pre;
        free(current);
    }
    return 0;
}
int deletebypos(int pos){
    struct node *pre,*current,*nextnode;
    int i=1;
    if(tail==NULL){
        printf("Can't delete,list is empty!\n");
    }
    else if(pos==1){
        deleteAtBeginning();
    }
    else if(pos==getlength()){
        deleteAtEnd();
    }
    else{
        pre=NULL;
        current=tail->next;
        nextnode=current->next;
        while(i<pos){
            pre=current;
            current=current->next;
            nextnode=current->next;
            i++;
        }
        pre->next=nextnode;
        free(current);
    }
    return 0;
}
int print(){
    struct node *temp;
    if(tail==NULL){
        printf("LIST IS EMPTY!");
    }
    else{
        temp=tail->next;
        while(temp->next!=tail->next){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
    return 0;
}
int getlength(){
    struct node *temp;
    int count=1;
    if(tail==NULL){
        printf("Length is 0.\n");
    }
    else{
        temp=tail->next;
        while(temp->next!=tail->next){
            count++;
            temp=temp->next;
        }
        printf("Length is %d\n",count);
        return count;
    }
}
int reverseCLL(){
    struct node *pre,*current,*nextnode;
    if(tail==NULL){
        printf("LIST IS EMPTY!\n");
    }
    else{
        current=tail->next;
        nextnode=current->next;
        while(current!=tail){
            pre=current;
            current=nextnode;
            nextnode=current->next;
            current->next=pre;
        }
        nextnode->next=tail;
        tail=nextnode;
    }
    return 0;
}
