#include<stdio.h>
#include<stdlib.h>
int n;
void insert(int a[])
{
	int i,pos,element;
	printf("enter the position of an element");
	scanf("%d",&pos);
	printf("enter the element to insert");
	scanf("%d",&element);
	for(i=n-1;i>=pos-1;i--)
	a[i+1]=a[i];
	a[pos-1]=element;
	n=n+1;
}
void delete(int a[])
{
	int i,pos;
	printf("enter the postion of an element");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	a[i]=a[i+1];
	n=n-1;
	printf("the elements is deleted successfully\n");
}
void display(int a[])
{
	int i;
	printf("the array elements after modification\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
void main()
{
	int a[10],choice,i;
	printf("enter the size of an array:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	while(1)
	{
		printf("1. insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("4.exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insert(a);
			break;
			case 2: delete(a);
			break;
			case 3:display(a);
			break;
			case 4: exit(0);
			default: printf("invalid choice");
			break;
		}
	}
}
