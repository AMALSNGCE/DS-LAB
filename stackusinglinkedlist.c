#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void main()
{
int opt;
do
{
printf("\nenter your choice\n 1.push \n 2.pop \n 3.display \n 4.exit\n");
scanf("%d",&opt);
switch (opt)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:display();
	break;
case 4:exit(0);
}
}
while (opt!=4);
}
void push()
{
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new->data);
new->next=top;
top=new;
}
void pop()
{
struct node *ptr;
if(top==NULL)
printf("\nstack underflow");
else
{
printf("\nthe poped item is %d",top->data);
ptr=top;
top=top->next;
free(ptr);
}
}
void display()
{
struct node *ptr;
if(top==NULL)
printf("\nstack underflow");
else{
ptr=top;
	while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}
}
