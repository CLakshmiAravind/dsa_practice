#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* top=NULL;


void insert(){
    int value;
    printf("enter value to insert into a stack");
    scanf("%d",&value);
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data=value;
    if(top){
    new->next=top;
    top=new;
    }
    else{
        new->next=NULL;
        top=new;
    }
}

void traversal(){
    struct Node* traverse=top;
    printf("IN traversal\n");

    if(!traverse){
        printf("Stack is empty");
        return ;
    }
    while(traverse != NULL){
        printf("%d\n",traverse->data);
        traverse=traverse->next;
    }
}


void delete(){
    struct Node* del=top;
    if(!del){
        printf("stack is empty");
    }
    else{
        top=del->next;
        free(del);
    }

}

int main(){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if(node){
        printf("Memory allocated succesfully%p",node);
    }
    traversal();
    insert();
    insert();
    insert();
    insert();
    traversal();
    delete();
    delete();
    traversal();
    delete();
    traversal();
    return 0;
}