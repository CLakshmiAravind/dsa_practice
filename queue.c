#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* Front=NULL;
struct Node* Rear=NULL;


void insert(){
    int value;
    printf("\nenter a value to queue : ");
    scanf("%d",&value);
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data=value;
    new->next=NULL;
    if(Front==NULL && Rear==NULL){
        Front=new;Rear=new;
    }
    else{
        new->next=Front;
        Front=new;
    }
}

void traversal(){
    struct Node* traverse=Front;
    printf("IN traversal\n");
    if(!Front){
        printf("queue is empty");
    }
    else if(Front==Rear){
        printf("%d\n",traverse->data);
    }
    else{
        while(traverse!=NULL){
        printf("%d\n",traverse->data);
        traverse=traverse->next;
        }
    }
    printf("OUT traversal");
}


void delete(){
    struct Node* del=Front;
    // printf("IN delete\n");
    if(Rear==NULL){
        printf("Queue is empty\n");
    }
    else{
        while(del->next!=Rear){
        del=del->next;
        }
        Rear=del;
        // del=Rear->next;
        // free(del);
        Rear->next=NULL;
    }
    // printf("IN delete\n");

}


int main(){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    if(new){
        printf("memory successfully created %p",new);
    }
    insert();
    insert();
    insert();
    insert();
    insert();
    traversal();
    delete();
    traversal(); 
    delete();
    traversal();
}
