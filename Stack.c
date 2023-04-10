#include <stdio.h>
#include<stdlib.h>
int stack[50];
int maxcapacity=50;
int top=-1;

int empty(){
    if(top == -1) return 1; 
    else return 0;


}
int isfull(){
    if(top == maxcapacity-1) return 1;
    else return 0;

}
void pop(){
    if(!empty()) printf("\nElement deleted : %d",stack[top--]);
    else printf("\nStack underflow");

}
void push(int element){
    if(!isfull()){
	stack[++top]=element;}
    else {
	printf("\nstack overflow");}


}


void display(){int i;printf("\ntop = %d\n",stack[top]);
    if(!empty()){
	for(i=top;i>=0;i--){ printf("%d\n",stack[i]);
    printf("^ \n");}}
    else{
	printf("\nstack underflow");}


}


void main(){
    int n=1;
    int element;

    printf("=================================>\nEnter choice \n1.Push 2.Pop 3.empty or not 4.display \n0 exit \n-->");

    scanf("%d",&n);
    printf("\n=================================>");

    while(n!=0){
        switch(n){
            case 1 : printf("\nenter element :");scanf("%d",&element); push(element);break;
            case 2 : pop();break;
            case 3 : empty()?printf("\nempty"):printf("\nnot empty");break;
            case 4 : display();break;
            case 0 : exit(0);break;
            default : exit(0);
        }
	printf("\n=================================>\nEnter choice \n1.Push 2.Pop 3.empty or not 4.displaytop \n0 exit \n--> ");
    scanf("%d",&n);
    printf("\n=================================>");



    }


}
