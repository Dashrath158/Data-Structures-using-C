#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node* top;


int isStackEmpty(){
    if(top==NULL){ return 1;}
    else  { return 0;
    }}
void pop(){
    if(!isStackEmpty()){
        int item;
        item=top->data;
        printf("Deleted item :%d",item);
        top=top->next;
    }
    else{
        printf("Stack underflow");
        }

}

void push(int element){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=element;
    temp->next=NULL;


    if(top==NULL){
        top=temp;    
    }
    else{
        temp->next=top;
        top=temp;
        printf("ELement inserted !!");

        
    }

}

void display(){
    if(!isStackEmpty()){printf("%d",top->data);}
    else{
        printf("Empty stack");
    }
}





void main(){
     int n=1;
    int element;
    top=NULL;

    printf("Enter choice \n1.Push 2.Pop 3.empty or not 4.display \n0 exit\n");
    scanf("%d",&n);

    while(n!=0){
        switch(n){
            case 1 : printf("enter element :\n");scanf("%d",&element); push(element);break;
            case 2 : pop();break;
            case 3 : if(isStackEmpty()) printf("\nStack empty"); 
                     else printf("Not empty"); 
                     break;
            case 4 : display();break;
            case 0 : exit(0);break;
            default : exit(0);
        }
	printf("\n=================================>\nEnter choice \n1.Push 2.Pop 3.empty or not 4.displaytop \n0 exit\n=================================>\n");
    scanf("%d",&n);


    }
}