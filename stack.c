#include <stdio.h>
#include <stdlib.h>
#include"stack.h"
int push(int ele){
    if(top==N-1){
        printf("Overflow Error!\n");
    }
    else{
        top++;
        arr_stack[top]=ele;
    }
    return 0;
}
int pop(){
    int item;
    if(top==-1){
        printf("Underflow Error!\n");
    }
    else{
        item=arr_stack[top];
        top--;
        printf("%d ",item);
    }
    return 0;
}
int peek(){
    if(top==-1){
        printf("Underflow Error!\n");
    }
    else{
        printf("Peek value is %d.\n",arr_stack[top]);
    }
    return 0;
}
int display(){
    int i;
    if(top==-1){
        printf("List is Empty!\n");
    }
    else{
        for(i=0;i<=top;i++){
            printf("%d ",arr_stack[i]);
        }
    }
    return 0;
}
