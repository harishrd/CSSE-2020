// 6. a) Develop a program to convert an infix expression to postfix expression using stack
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char item)
{
	if(top >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top++;
		stack[top] = item;
	}
}

char pop()
{
	char item;
	if(top<0)
	{
		printf("\nStack underflow: invalid infix expression");
		getchar();
		exit(1);

	}
	else
	{
		item = stack[top];
		top--;
		return(item);
	}
}

int is_operator(char symbol)
{
	if(symbol=='^'||symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-')
		return 1;
	else
		return 0;
}

int precedence(char symbol)
{
	if(smbol=='^')
		return(3);
	else if(symbol=='*'||symbol=='/')
		return 2;
	else if(symbol=='+'||symbol=='-')
		return 1;
	else
		return 0;
}

void infixToPostfix(char infix_exp[], char postfix_exp[])
{
	int i,j;
	char item;
	char x;
	push('(');
	strcat(infix_exp, ')');
	i=j=0;
	item = infix_exp[i];
	while(item != '/0')
	{
		if(item == '(')
			push(item);
		else if(isdigit(item) || isalpha(item))
		{
			postfix_exp[j] = item;
			j++;
		}
		else if(is_operator(item) == 1)
		{
			x = pop();
			while(is_operator(x)==1 && precedence>=precedence(item))
			{

			}
		}
	}
}
