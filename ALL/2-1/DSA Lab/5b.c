// 5.b) Write a program to implement queue using linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
};

struct node *front;
struct node *rear;

void insert();
void delete();
void display();

int main()
{
	int choice;
   while(choice != 4)
   {
      printf("\n*************************Main Menu*****************************\n");
      printf("\n=================================================================\n");
      printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
      printf("\nEnter your choice ?");
      scanf("%d",& choice);

      switch(choice)
      {
         case 1:
         	insert();
         	break;
         case 2:
         	delete();
         	break;
         case 3:
         	display();
         	break;
         case 4:
         	exit(0);
         	break;
         default:
         	printf("\nInvalid choice\n");
      }
   }
	return 0;
}

void insert()
{
	struct node *ptr;
   int item;

   ptr = (struct node *) malloc (sizeof(struct node));
   if(ptr == NULL)
   {
      printf("\nOVERFLOW\n");
      return;
   }
   else
   {
      printf("\nEnter value?\n");
      scanf("%d",&item);
      ptr -> data = item;
      if(front == NULL)
      {
         front = ptr;
         rear = ptr;
         front -> next = NULL;
         rear -> next = NULL;
      }
      else
      {
         rear -> next = ptr;
         rear = ptr;
         rear->next = NULL;
      }
   }
}

void delete()
{
	struct node *ptr;
   if(front == NULL)
   {
      printf("\nUNDERFLOW\n");
      return;
   }
   else
   {
      ptr = front;
      front = front -> next;
      printf("The deleted element is : %d",ptr->data);
      free(ptr);
   }
}

void display()
{
	struct node *ptr;
   ptr = front;
   if(front == NULL)
   {
      printf("\nEmpty queue\n");
   }
	else
	{
		printf("\nprinting values .....\n");
       while(ptr != NULL)
		{
			printf("\n%d\n",ptr -> data);
         ptr = ptr -> next;
		}
	}
}

/*
Output:


*************************Main Menu*****************************

=================================================================

1.insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice ?1

Enter value?
5

*************************Main Menu*****************************

=================================================================

1.insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice ?3

printing values .....

5

*************************Main Menu*****************************

=================================================================

1.insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice ?1

Enter value?
2

*************************Main Menu*****************************

=================================================================

1.insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice ?1

Enter value?
2

*************************Main Menu*****************************

=================================================================

1.insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice ?1

Enter value?
2

*************************Main Menu*****************************

=================================================================

1.insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice ?1

Enter value?
4

*************************Main Menu*****************************

=================================================================

1.insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice ?3

printing values .....

5

2

2

2

4

*************************Main Menu*****************************

=================================================================

1.insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice ?2
The deleted element is : 5
*************************Main Menu*****************************

=================================================================

1.insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice ?3

printing values .....

2

2

2

4

*************************Main Menu*****************************

=================================================================

1.insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice ?4


...Program finished with exit code 0
Press ENTER to exit console.

*/
