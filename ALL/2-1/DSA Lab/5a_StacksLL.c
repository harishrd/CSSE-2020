/*5. a) Write a program to implement stack using linked list */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node
{
	int data;
	struct Node *next;
}*top = NULL;

void push(int);
void pop();
void display();

int main()
{
	int choice, value;
	printf("\n-----Stack using Linked List-----\n");

	menu:
	printf("\n***MENU***\n");
	printf("1.Push\n2.Pop\n3.Display\n4.Exit\n0.View menu\n");

	while(1)
	{
		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0:
					goto menu;
					break;
			case 1:
					printf("\nEnter value to be inserted: ");
					scanf("%d", &value);
					push(value);
					break;
			case 2:
					pop();
					break;
			case 3:
					display();
					break;
			case 4:
					exit(0);
			default:
					printf("\n!Enter valid choice");
		}
	}
}


void push(int value)
{
	struct Node *newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	if(top==NULL)
		newNode->next = NULL;
	else
		newNode->next = top;
	top = newNode;
	printf("element is pushed");
}

void pop()
{
	struct Node *temp = top;
	if(top==NULL)
		printf("\nStack is empty");
	else
	{
		printf("\nelement(%d) popped out", temp->data);
		top = temp->next;
		free(temp);
	}
}

void display()
{
	if(top == NULL)
		printf("\nStack is empty\n");
	else
	{
		struct Node *temp = top;
		printf("\n---------------------------------------\n");
		while(temp->next != NULL)
		{
			printf("\n%d-->\n", temp->data);
			temp=temp->next;
		}
		printf("\n%d-->NULL\n", temp->data);
		printf("\n---------------------------------------\n");
	}
}
