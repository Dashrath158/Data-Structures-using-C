
#include<stdio.h>
#include<stdlib.h>
#define MAX 30

int queue[MAX];
int front;
int rear;

front=-1;
rear=-1;
void display();
void enque();
void deque();
int isEmpty();
int isFull();

int main(){
    printf("\nArray/Static implementation of Queue");
    int ch=1;
    printf("\n\nChoose operation : \n1. enque 2. deque 3. display 0. Exit ");
        scanf("%d",&ch);
    do{ 
        
        
        switch(ch){
            case 1 : enque(); break;
            case 2 : deque(); break;
            case 3 : display(); break;
            case 0 : exit(0);
            default : printf("\ninvalid input. \nclosing..........");
                        exit(0);
        }printf("\nfront: %d rear: %d",front,rear);
        printf("\n\nChoose operation : \n1. enque 2. deque 3. display 0. Exit ");
        scanf("%d",&ch);
    }
    while(!0);	

return 0;
}

void enque(){
    int x;
    printf("\nEnter element to insert : ");
    scanf("%d",&x);
     if(isFull())
     {
        printf("\nQueue is full!!!");
    }
    else if(isEmpty())
    {
        rear=front=0;
        queue[front]=x;
        printf("\nSuccessfully inserted first element : %d",x);
    }
    else
    {
     queue[++rear]=x;
     printf("\n%d inserted",x);   
    }
    display();
    }

void deque(){
    if(isEmpty()){
        
    }
    else if(front==rear){
        
        printf("\nDeleted the only element in queue : %d",queue[front]);
        front=rear=-1;
    }
    else{
        printf("\nElement deleted: %d ",queue[front++]);
        
    }
    display();
}

void display(){
    int i;
    printf("\n");
    if(!isEmpty()){
    for(i=front;i<=rear;i++){
        printf("%d < ", queue[i]);
    }
    }
    else{
        printf("Queue is empty");

    }
}

int isEmpty(){
    if(rear==-1||front==-1){
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(){
    if(rear==MAX-1){
        return 1;
    }
    else
    {
        return 0;
    }
}

   




