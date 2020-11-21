#include <stdio.h>
#include <stdlib.h>
#include"queuearr.h"
int frontend=-1;
int rear=-1;
int enqueue(int element){
    if(rear==N-1){
        printf("Overflow Condition;\n");
    }
    else if(frontend==-1 && rear==-1){
        frontend=rear=0;
        queuue[rear]=element;
    }
    else{
        rear++;
        queuue[rear]=element;
    }
    return 0;
}
int dequeue(){
    if(frontend==-1 && rear==-1){
        printf("Underflow Condition;\n");
    }
    else if(frontend==rear){
        printf("Deque element is %d \n",queuue[frontend]);
        frontend=rear=-1;
    }
    else{
        printf("Deque element is %d \n",queuue[frontend]);
        frontend++;
    }
    return 0;
}
int peek(){
    if(frontend==-1 && rear==-1){
        printf("Underflow Condition;\n");
    }
    else{
        printf("Peek/Front element is %d\n",queuue[frontend]);
    }
    return 0;
}
int display(){
    if(frontend==-1 && rear==-1){
        printf("Queue is Empty.\n");
    }
    else{
        for(int i=0;i<rear+1;i++){
            printf("%d ",queuue[i]);
        }
    }
    return 0;
}
