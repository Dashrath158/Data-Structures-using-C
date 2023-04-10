#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    /* data */
}*head =NULL;

struct node* ptr;


void beginsert()
{
struct node *ptr;
int item;
ptr = (struct node *) malloc(sizeof(struct node *));
if(ptr == NULL)
{
printf("\nOVERFLOW");
}
else
{
printf("\nEnter value\n");
scanf("%d",&item);
ptr->data = item;
ptr->next = head;
head = ptr;
printf("\nNode inserted");
}
}


void lastinsert()
{
struct node *ptr,*temp;
int item;
ptr = (struct node*)malloc(sizeof(struct node));
if(ptr == NULL)
{
printf("\nOVERFLOW");
}
else
{
printf("\nEnter value?\n");
scanf("%d",&item);
ptr->data = item;
if(head == NULL)
{
ptr -> next = NULL;
head = ptr;
printf("\nNode inserted");
}
else
{
temp = head;
while (temp -> next != NULL)
{
temp = temp -> next;
}
temp->next = ptr;
ptr->next = NULL;
printf("\nNode inserted");
}
}
} 


//Insert Node at inbetween of LL
void randominsert()
{
int i,loc,item;
struct node *ptr, *temp;
ptr = (struct node *) malloc (sizeof(struct node));
if(ptr == NULL)
{
printf("\nOVERFLOW");
}
else
{
printf("\nEnter element value");
scanf("%d",&item);
ptr->data = item;
printf("\nEnter the location after which you want to insert");
scanf("\n%d",&loc);
temp=head;
for(i=1;i<loc;i++)
{
temp = temp->next;
if(temp == NULL)
{
printf("\ncan't insert\n");
return;
}
}
ptr ->next = temp ->next;
temp ->next = ptr;
printf("\nNode inserted");
}
} 


void begin_delete()
{
struct node *ptr;
if(head == NULL)
{
printf("\nList is empty\n");
}
else
{
ptr = head;
head = ptr->next;
free(ptr);
printf("\nNode deleted from the begining ...\n");
}
} 


//Delete Node at Last of LL
void last_delete()
{
struct node *ptr,*ptr1;
if(head == NULL)
{
printf("\nlist is empty");
}
else if(head -> next == NULL)
{
head = NULL;
free(head);
printf("\nOnly node of the list deleted...\n");
}
else
{
ptr = head;
while(ptr->next != NULL)
{
ptr1 = ptr;
ptr = ptr ->next;
}
ptr1->next = NULL;
free(ptr);
printf("\nDeleted Node from thelast ...\n");
}
} 



//Delete Node at Mid of LL
void random_delete()
{
struct node *ptr,*ptr1;
int loc,i;
printf("\n Enter the location of the node after which you want to perform deletion \n");
scanf("%d",&loc);
ptr=head;

for(i=1;i<=loc;i++)
{
ptr1 = ptr;
ptr = ptr->next;
if(ptr == NULL)
{
printf("\nCan't delete");
return;
}
}

ptr1 ->next = ptr ->next;
free(ptr);
printf("\nDeleted node %d ",loc);
} 


void display()
{
struct node *ptr;
ptr = head;
if(ptr == NULL)
{
printf("Nothing to print");
}
else
{
printf("\nprinting values . . . . .\n");
while (ptr!=NULL)
{
printf(" %d --> ",ptr->data);
ptr = ptr -> next;
}
if (ptr==NULL)
{printf("NULL");
    /* code */
}
}}


void search()
{
struct node *ptr;
int item,i=0,flag;
ptr = head;
if(ptr == NULL) {
printf("\nEmpty List\n"); }
else {
printf("\nEnter item which you want to search?\n");
scanf("%d",&item);
while (ptr!=NULL) {
if(ptr->data == item) {
printf("item found at location %d ",i+1);
flag=0;
}
else
{
flag=1;
}
i++;
ptr = ptr -> next;
}
if(flag==1)
{
printf("Item not found\n");
}
}
}

void main(){
   
    
    int c=0;
    printf("\n=========================================================================================");
    printf("\nEnter your choice : \n1.insert at beginning \n2.insert at end \n3.delete from beginning \n4.Delete from end \n5.Delete from mid \n6.Display \n7.Search \n0. exit");
    scanf("%d",&c);
    printf("\n=========================================================================================");

    while(c!=0){
        switch(c){

            case 1 : beginsert();break;
            case 2 : lastinsert();break;
            case 3 : begin_delete();break;
            case 4 : last_delete();break;
            case 5 : random_delete();break;
            case 6 : display();break;
            case 7 : search();break;
            case 0 : exit(0);
            default : exit(0);
       }
       printf("\n=========================================================================================");
        printf("\nEnter your choice : \n1.insert at beginning \n2.insert at end \n3.delete from beginning \n4.Delete from end \n5.Delete from mid \n6.Display \n7.Search \n0. exit");
        scanf("%d",&c);
        printf("\n=========================================================================================\n");

    }

    

    
}
