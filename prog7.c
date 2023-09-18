#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*left,*right;
	
};
typedef struct node * NODE;
NODE getnode(int data)
{
	NODE newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return(newnode);
}
NODE insert_level_order(int a[],int i,int n)
{
	NODE root=NULL;
	if(i<n)
	{
		root=getnode(a[i]);
		root->left=insert_level_order(a,2*i+1,n);
		root->right=insert_level_order(a,2*i+2,n);
	}
	return root;
}
void inorder(NODE root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}
int main()
{
	
	int a[]={1,2,3,4,5,6};
    int	n=sizeof(a)/sizeof(a[0]);
	printf("\n  Order is given as:\n");
	NODE root=insert_level_order(a,0,n);
	inorder(root);
}
