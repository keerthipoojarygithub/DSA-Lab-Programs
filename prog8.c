#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*left,*right;
	
};
typedef struct node *NODE;
NODE createnode(int info)
{
	NODE newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=info;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
NODE insert(NODE root,int info)
{
	if(root==NULL)
	return createnode(info);
	if(info<root->info)
	root->left=insert(root->left,info);
	else if(info>root->info)
	root->right=insert(root->right,info);
	return root;
}
void inorder(NODE root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->info);
		inorder(root->right);
	}
}
void preorder(NODE root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->info);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(NODE root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->info);

	}
}
int main()
{
	int i,n,info,choice;
	NODE root=NULL;
	printf("\nEnter the number of elements to insert into BST\n");
	scanf("%d",&n);
    printf("\n enter the element:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&info);
	}
	while(1)
	{
		printf("\n Binary Search Operations:\n");
		printf("1.Inorder Traversal\n2.Pre-order traversal\n3.Post-order traversal\n 4.Exit\n");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\n Inorder Traversal\n");
			inorder(root);
			break;
			case 2:printf("\n Preorder Traversal\n");
			preorder(root);
			break;
			case 3:printf("\n Postorder Traversal\n");
			postorder(root);
			break;
			case 4:exit(0);
			
			default:printf("Invalid choice!!!");
			break;
		}
		
	}
}

