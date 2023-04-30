//PriorityQueue
//Lower the value higher the priority
#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int data;
    int pty;
    struct Queue *next;
};

struct Queue *head=NULL;
void display();
void insert();

void delete();

void main(){
    printf("\nLinked implementation of Priority queue");
    printf("\nEnter your choice : \n1. Insert 2. Delete 3. Display 0. Exit");
    int ch=0;
    scanf("%d",&ch);
    while(ch!=0){
        switch(ch){
            case 1 : insert();break;
            case 2 : delete();break;
            case 3 : display();break;
            case 0 : exit(0);
            default : exit(0);
        }
        printf("\n\nEnter your choice : \n1. Insert 2. Delete 3. Display 0. Exit");
         scanf("%d",&ch);

    }


}
void display(){
    struct Queue *temp;
    temp=head;
    if(temp==NULL){
     printf("\nQueue is empty");

    }
    else {
        while(temp!=NULL){
            printf("%d < ",temp->data);
            temp=temp->next;
        }
    }

}
void insert(){
    struct Queue *temp=(struct Queue*)malloc(sizeof(struct Queue));
    printf("\nEnter element : ");
    int element;
    scanf("%d",&element);
    printf("\nEnter element with priority : ");   
    int p;
    scanf("%d",&p);
    temp->data=element;
    temp->pty=p;
    temp->next = NULL;
    if(head==NULL){
        head=temp;

    }
    else{
        if(temp->pty < head->pty){
            temp->next=head;
            head=temp;
        }
        else{struct Queue *q=head;
            while(q->next!=NULL && temp->pty >= (q->next)->pty ){
                q=q->next;

            }
            temp->next=q->next;
            q->next=temp;
        }
    }   
    display();
}


void delete(){ 
    struct Queue *temp=head;
    if (temp == NULL){
        printf("\nQueue is empty");
        }
    else{
        printf("\nElement deleted : %d",head->data);
        head=head->next;
        free(temp);
    }
    display();
}

