// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node *field;
// };

// int main(){

//     // struct Node *p = (struct Node*) malloc(sizeof(struct Node));
//     struct Node *p = ( struct Node *)malloc(sizeof(struct Node));
//     p->data=20;
//     printf("%d\n",p->data);
//     printf("%lu\n",sizeof(p));
//     if(p==NULL){
//         printf("p is null\n");
//     }
//     if(p->field==NULL){
//         printf("p->field is null\n");
//     }
//     struct Node *q= (struct Node * )malloc(sizeof(struct Node));
//     q->data=30;
//     printf("this is from q  %d\n",q->data);
//     p->field=q;
//     printf("%d\n",p->field->data);
//     free(p);
//     free(q);

// }




#include<stdio.h>
#include<stdlib.h>

void insert(int data);
void display();
void delete();
struct node{
    int data;
    struct node *next;
};
struct node *first=NULL;
struct node *p=NULL;
int main(){
//   struct node *first=NULL;
//   struct node *p=NULL;
//   p=(struct node *)malloc(sizeof(struct node));
//   p->data=20;
//   first=p;
//   printf("%d",first->data);
    display();
    delete();
    insert(10);
    display();
    delete();
    display();
    insert(20);
    display();
    delete();
    display();
    insert(30);
    display();
    insert(40);
    insert(50);
    insert(60);
    display();
    delete();
    display();

}

void insert(int data){
    struct node*q;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=data;
    if(first==NULL){
        first=p;
    }
    else{
        q=first;
        while(q->next!=NULL){
            q=q->next;
        }
        q->next=p;
    }
}

void display(){
    p=first;
    if(p==NULL){
        printf("no elements in linked list\n");
    }
    else{
        while(p!=NULL){
            printf("%d\t",p->data);
            p=p->next;
        }
        printf("\n");
    }
}

void delete(){
    struct node *q=NULL;
    p=first;
    if(p==NULL){
        printf("no elements in the linked list to delete\n");
    }
    else if(p->next==NULL){
        first=NULL;free(p);
        printf("deleted only element\n");
    }
    else{
        while(p->next->next!=NULL){
            p=p->next;
        }
        q=p->next;
        p->next=NULL;
        free(q);
        printf("deleted a element\n");
    }
}