#include<stdio.h>
#include<stdlib.h>

 struct Queue{
    int data;
    struct Queue *next;
};

int size=0;

struct Queue *front=NULL;
struct Queue *rear=NULL;

void display(){
     struct Queue *temp=front;
     printf("\n");
     if(temp==NULL) printf("Queue is empty");
     else
     while(temp!=NULL){
        printf("%d < ",temp->data);
        temp=temp->next;
     }
     printf("\nSize of Queue: %d",size);


}
void enque(){
    
    struct Queue *temp=(struct Queue*)malloc(sizeof(struct Queue));
    printf("\nEnter data to enter : ");
    scanf("%d",&temp->data);
    temp->next=NULL;
  
    if(front==NULL){        
        front=rear=temp; 
        size++;       
    }
    else{
        rear->next=temp;
        rear=temp;
        size++;

    }
    display();

}

void deque(){
    if(front==NULL){
        printf("\nQueue is empty!!");
    }
    else{
        struct Queue *temp=front;
        front=front->next;
        printf("\nDeleted element : %d",temp->data);

        free(temp);
        size--;
    }
    display();

}



int main(){
    printf("\nLinked implementation of linear queue");
    printf("\nEnter your choice : \n1. Enque 2. Deque 3. Display 0. Exit");
    int ch;
    scanf("%d",&ch);
    while(ch!=0){
        switch(ch){
            case 1 : enque();break;
            case 2 : deque();break;
            case 3 : display();break;
            case 0 : exit(0);
            default : exit(0);
        }
        printf("\n\nEnter your choice : \n1. Enque 2. Deque 3. Display 0. Exit");
         scanf("%d",&ch);

    }


}

