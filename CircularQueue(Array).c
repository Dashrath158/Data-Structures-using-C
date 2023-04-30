#include <stdio.h>
#include <stdlib.h>
#define MAX 30

struct queue {
    int que[MAX];
    int front;
    int rear;
};

struct queue items;
struct queue *q = &items;

void enque();
void deque();
void display();
int Empty();
int Full();

int main(int argc, char *argv[]) {
    printf("\n%d\n%s", argc, argv[0]);
    printf("\nCircular implementation of Queue");
    int ch = 1;
    printf("\n\nChoose operation:\n1. enque\n2. deque\n3. display\n0. Exit ");
    scanf("%d", &ch);
    do {
        switch(ch) {
            case 1: enque(); break;
            case 2: deque(); break;
            case 3: display(); break;
            case 0: exit(0);
            default: printf("\nInvalid input.\nClosing..........");
                     exit(0);
        }
        printf("\nfront: %d rear: %d", q->front, q->rear);
        printf("\n\nChoose operation:\n1. enque\n2. deque\n3. display\n0. Exit ");
        scanf("%d", &ch);
    } while(ch != 0);
         
    return 0;
}

void enque() {
    int x;
    printf("\nEnter element to add: ");
    scanf("%d", &x);
    if(Full()) {
        printf("\nQueue is full!!");
    } else {
        if(Empty()) {
            q->front = q->rear = 0;
        } else {
            q->rear = (q->rear + 1) % MAX;
        }
        q->que[q->rear] = x;
    }
    display();
}

void deque() {
    if(Empty()) {
        printf("\nQueue is empty!");
    } else {
        printf("\nDeleted element: %d", q->que[q->front]);
        if(q->front == q->rear) {
            q->front = q->rear = -1;
        } else {
            q->front = (q->front + 1) % MAX;
        }
    }
    display();
}

int Empty() {
    if(q->rear == -1) {
        return 1;
    } else {
        return 0;
    }
}

int Full() {
    if((q->rear + 1) % MAX == q->front) {
        return 1;
    } else {
        return 0;
    }
}

void display() {
    int i;
    if(Empty()) {
        printf("\nQueue is empty!");
    } else {
        printf("\nQueue elements: ");
        for(i = q->front; i != q->rear; i = (i + 1) % MAX) {
            printf("%d < ", q->que[i]);
        }
        printf("%d", q->que[i]);
    }
}
