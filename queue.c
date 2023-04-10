#include<stdio.h>
#include<stdlib.h>
#define MAX 20

//declaration
void enqueue();
void dequeue();
void display();
int queue[MAX];
int rear=-1;
int front=-1;

//insertion
void enqueue()
{
	int info,i;
	if(rear==MAX-1)
	printf("\nQUEUE OVERFLOW");
	else
	{
		if(front==-1)
		front=0;
		printf("\nEnter the element to be inserted: ");
		scanf("%d",&info);
		rear=rear+1;
		queue[rear]=info;
	}
	display();
}

//deleteion
void dequeue()
{
	if(front==-1)
	printf("\nQUEUE UNDERFLOW");
	else
	{
		printf("\nThe deleted element is %d",queue[front]);
		front=front+1;
	}
	display();
}

//display
void display()
{
	int i;
	if(front==-1)
	printf("\nQUEUE IS EMPTY");
	else
	{
		printf("\nThe Queue is:\n");
		for(i=front;i<=rear;i++)
		{
			printf(">> %d <<",queue[i]);
			printf("\n");
		}
	}
}

//driver code
void main(){
	int choice;
    while (1)
    {
    	printf("\n----------SEQUENTIAL IMPLEMENTATION OF QUEUE----------\n");
        printf("1.INSERT element to queue \n");
        printf("2.DELETE element from queue \n");
        printf("3.DISPLAY all elements of queue \n");
        printf("4.EXIT \n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("\n-----EXIT POINT-----");
            exit(0);
            default:
            printf("Wrong choice \n");
        }
    }
}