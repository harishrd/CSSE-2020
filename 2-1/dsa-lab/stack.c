// 4a Stack using arrays

#include<stdio.h>
int stack[100],choice,n,top,x,i;

void isPalindrome()
{
       printf("\nEnter the string: ")
    scanf("%s", &str);
    int length = strlen(str);
 
    // Allocating the memory for the stack
    stack = (char*)malloc(length * sizeof(char));
 
    // Finding the mid
    int i, mid = length / 2;
 
    for (i = 0; i < mid; i++) {
        push(str[i]);
    }
 
    // Checking if the length of the string
    // is odd, if odd then neglect the
    // middle character
    if (length % 2 != 0) {
        i++;
    }
 
    // While not the end of the string
    while (str[i] != '\0') {
        char ele = pop();
 
        // If the characters differ then the
        // given string is not a palindrome
        if (ele != str[i])
            return 0;
        i++;
    }
}

void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
        printf("\n The STACK is empty");
}



int main()
{

    top=-1;
    printf("\nEnter the size of STACK:");
    scanf("%d",&n);

    do {
        printf("\n\tSTACK OPERATIONS USING ARRAY");
        printf("\n\t--------------------------------");
        printf("\n\t1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
        printf("\nEnter the Choice:");
        scanf("%d",&choice);

        switch(choice)
        {
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
                isPalindrome();
                break;
            }
            case 5:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }

        }
    }while(choice!=5);
    return 0;
}

