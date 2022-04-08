 // 6.b) Write a program to evaluate given postfix expression using stack

#include<stdio.h>
#include<ctype.h>
#define MAXSTACK 100
#define POSTFIXSIZE 100

int stack[MAXSTACK];
int top = -1;

void push(int item)
{
	if(top >= MAXSTACK -1)
		printf("\nStack overflow");
	else
	{
		top++;
		stack[top] = item;
	}
}

int pop()
{
	int item;
	if(top<0)
		printf("\nStack underflow");
	else
	{
		item = stack[top];
		top--;
		return item;
	}
}

void EvalPostfix(char postfix[])
{
	int i;
	char ch;
	int val;
	int a,b;
	for(i=0;postfix[i] != ')';i++)
	{
		ch = postfix[i];
		if(isdigit(ch))
			push(ch-'0');
		else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
		{
			a = pop();
			b = pop();
			switch(ch)
			{
				case '*':
					val = b*a;
					break;
				case '/':
					val = b/a;
					break;
				case '+':
					val = b+a;
					break;
				case '-':
					val = b-a;
					break;
			}
			push(val);
		}
	}
	if(top<=0)
		printf("\nResult of expression evaluation: %d\n", pop());
	else
	{
		printf("\nIncomplete expression");
	}
}


int main()
{
	int i;
	char postfix[POSTFIXSIZE];
	printf("\nASSUMPTION: There are onl four operators(*,/,+,-) in an expresssion and operand is single digit only\n");
	printf("\nEnter postfix expresssion, \npress right parenthesis ')' for end expression:\n");
	for(i=0;i<=POSTFIXSIZE-1;i++)
	{
		scanf("%c", &postfix[i]);
		if(postfix[i]==')')
		{
			break;
		}
	}
	EvalPostfix(postfix);
	return 0;
}
