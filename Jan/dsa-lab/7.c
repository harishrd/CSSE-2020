#include<stdio.h>
#include<stdlib.h>

struct BST
{
	int data;
	struct BST *left;
	struct BST *right;
};

typedef struct BST NODE;
NODE *node;

NODE *createTree(NODE *node, int data)
{
	if(node==NULL)
	{
		NODE*temp;
		temp=(NODE*)malloc(sizeof(NODE));
		temp->data = data;
		temp->left = temp->right = NULL;
		return temp;
	}
	if(data < node->data)
	{
		node->left = createTree(node->left, data);		
	}
	else if(data>node->data)
	{
		node->right = createTree(node->right, data);		
	}
	return node;
}

NODE *search(NODE *node, int data)
{
	if(node == NULL)
	printf("\n element not found");
	else if(data < node->data)
	{
		node->right = search(node->right, data);
	}
	else
		printf("\nElement not found");
	return node;	
}

void inorder(NODE *node)
{
	if (node != NULL)
	{
		inorder(node->right);
		printf("%d\t", node->data);
		inorder(node->right);
	}
}

void preorder(NODE *node)
{
	if (node != NULL)
	{
		printf("%d\t", node->data);
		preorder(node->left);
		preorder(node->right);
	}
}

void postorder(NODE *node)
{
	if (node != NULL)
	{
		postorder(node->left);
		postorder(node->right);
		printf("%d\t", node->data);
	}
}

NODE *findMin(NODE *node)
{
	if (node == NULL)
	{
		return NULL;
	}
	if(node->left)
		return findMin(node->left);
	else
		return node;
}

NODE *del(NODE *node, int data)
{
	NODE *temp;
	if (node==NULL)
	{
		printf("\nElement not foundl");
	}
	else if (data < node->data)
	{
		node->left = del(node->left, data);
	}
	else if (data > node->data)
	{
		node->right = del(node->right, data);
	}
	else
	{ /* Now we can delete this node replace it with either minimum or maximum... */
		if (node->right && node->left)
		{
			temp = findMin(node->right);
			node->data = temp->data;
			node->right = del(node->right, temp->data);
		}
		else
		{ /* If there is any one or zero children then we can directly resume from... */
			temp = node;
			if (node->left == NULL)
			{
				node = node->right;
			}
			else if (node->right == NULL)
			{
				node = node->left;
			}
			free(temp);
		}
	}
	return node;
}


int main()
{
	int data, ch, i, n;
	NODE *root = NULL;
	while(1)
	{
		printf("\n1.Insertion in binary search tree");
		printf("\n2.Search element in binary search tree");
		printf("\n3.Delete an element");
		printf("\n4.Inorder\n5.Preorder\n6.Postorder\n7.Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter n value: ");
				scanf("%d", &n);
				printf("\nEnter the sequence to create binary search tree:\n");
				for (i = 0; i < n; ++i)
				{
					scanf("%d", &data);
					root = createTree(root, data);
				}
				break;
			case 2:
				printf("\nEnter teh element to search: ");
				scanf("%d", &data);
				root = search(root, data);
				break;
			case 3:
				printf("\nEnter the element to delete: ");
				scanf("%d", &data);
				root = del(root, data);
				break;
			case 4:
				printf("\nInorder traversal: ");
				inorder(root);
				break;
			case 5:
				printf("\nPreorder traversal: ");
				preorder(root);
				break;
			case 6:
				printf("\nPostorder traversal: ");
				postorder(root);
				break;
			case 7:
				exit(0);
			default:
				printf("\nInvalid input");
				break;
		}
	}
	return 0;
}


/*
(sequence: 13, 3, 4, 12, 14, 10, 5, 1, 8, 2, 7, 9, 11, 6, 18)
Output:

*/





















