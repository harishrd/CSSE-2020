// 4a Stack using arrays

// https://github.com/harishrd/dsa-lab

#include<stdio.h>
int stack[100],choice,n,top,x,i;

int main()
{

    top=-1;
    printf("\nEnter the size of STACK:");
    scanf("%d",&n);
    menu:
        printf("\n\t     STACK OPERATIONS USING ARRAY");
        printf("\n\t--------------------------------------");
        printf("\n\t1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\n");
        printf("\nEnter the Choice: ");

    do {
        char m;
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
                goto menu;
                break;
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\tEXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\tEnter a Valid Choice");
            }
        }
        printf("\n***to display menu press 0***\n");
        printf("\nEnter the Choice: ");
    }while(choice!=4);
    return 0;
}

void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf("Enter a value to be pushed: ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\tStack is under flow");
    }
    else
    {
        printf("\n\tThe popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nThe elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
        printf("\nThe STACK is empty");
}