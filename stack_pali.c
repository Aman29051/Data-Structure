#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stack_pali.h>

void push(char arg){
    top++;
    stack2[top]=arg;
}
char pop(){
    char c;
    c=stack2[top];
    top--;
    //printf("%c",c);
    return c;
}
