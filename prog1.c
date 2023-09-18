#include<stdio.h>
#include<stdlib.h>
int create(int n,int a[])
{
	int i;
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
}
int display(int n,int a[ ])
{
	int i;
	printf(" the array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		
	}
	printf("\n The array elements are successfully displayed:");
	
}
int main()
{
	int a[10],n,i,choice;
	printf("enter n:");
	scanf("%d",&n);
	while(1)
	{
		printf("\n1.Create an array of n integer\n");
		printf("\n2.Display of array elements\n");
		printf("\n3.Exit\n");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create(n,a);
				break;
			
			case 2:
			display(n,a);
			break;
			case 3:exit(0);
			default:printf("invalid choice!!!");
			break;
		}
	}
}


