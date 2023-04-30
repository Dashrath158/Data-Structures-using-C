#include <stdio.h>
#include <stdlib.h>
#define MAX 30
struct queue{
    int que[MAX];
    int front;
    int rear;

};
struct queue items;
struct queue *q=&items;


void enque();
void deque();
void display();
int Empty();
int Full();

int main(int argc,char *argv[]){
    


q->front =-1;
q->rear=-1;
    printf("->%d\n%s<-",argc,argv[0]);
     printf("\nArray/Static implementation of Queue");
    int ch=1;
    printf("\n\nChoose operation : \n1. enque 2. deque 3. display 0. Exit ");
        scanf("%d",&ch);
     while(ch!=0){ 
        
        
        switch(ch){
            case 1 : enque(); break;
            case 2 : deque(); break;
            case 3 : display(); break;
            case 0 : exit(0);
            default : printf("\ninvalid input. \nclosing..........");
                        exit(0);
        }printf("\nfront: %d rear: %d",q->front,q->rear);
        printf("\n\nChoose operation : \n1. enque 2. deque 3. display 0. Exit ");
        scanf("%d",&ch);
    }
   
         
    return 0;
}


void enque(){int x;
    printf("\nEnter element to add : ");
    scanf("%d",&x);
    if(Full()){
        printf("\nQueue is full!!");
    }
    else if (Empty()){
        q->front=q->rear=0;
        q->que[q->front]=x;
    }
    else
    {
        q->que[++q->rear]=x;
    }
    display();
}

void deque(){
    if(Empty()){
        printf("\nQueue is empty!");

    }
    else if (q->front==q->rear ){
        printf("\nDeleted the last element of queue : %d",q->que[q->front]);
        q->rear=q->front=-1;

    }
    else{
        printf("\nDeleted element : %d",q->que[q->front++]);

    }
    display();
}

int Empty(){
    if(q->rear==-1){
        return 1;

    }
    else return 0;
}

int Full(){
    if (q->rear==MAX-1) return 1;
    else return 0;
}

void display(){

    int i;
    if(Empty()) printf("\nQueue is Empty!!!!");
    else 
    for(i=q->front;i<=q->rear;i++){
        printf("%d < ",q->que[i]);
    }

}




