#include <stdio.h>
#include <stdlib.h>
#include"avl.h"


int main() {

    struct Node *r = NULL;
    int ch=1,ele;
    printf("\nCHOICE:\n1.Insert\n2.Preorder Traversal\n3.DeleteNode\n4.Quit\n");
    while(ch){
        printf("\nEnter Choice: ");
        scanf("%d",&ch);
        if(ch==1){
            printf("\nEnter Element: ");
            scanf("%d",&ele);
            r=insertNode(r,ele);
        }
        else if(ch==2){
            printf("\nPre-Order Traversal is : \n");
            printPreOrder(r);
        }
        else if(ch==3){
            printf("\nEnter Element you wanna delete: ");
            scanf("%d",&ele);
            r = deleteNode(r, ele);
        }
        else if(ch==4){
            return 0;
        }
        else{
            printf("\nCHOICE:\n1.Insert\n2.Preorder Traversal\n3.Quit\n");
        }
    }

  return 0;
}
