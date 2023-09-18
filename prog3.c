#include<stdio.h>
#include<stdlib.h>
int n;
void push(int a[],int *top)
{
	int ele;
	if(*top==(n-1))
	printf("stack overflow");
	else
	{
		printf("enter element to insert");
		scanf("%d",&ele);
		*top=*top+1;
		a[*top]=ele;
	}
}
int pop(int a[],int *top)
{
	int ele;
	if(*top==1)
	{
		printf("stack underflow");
		return-1;
	}
	else
	{
	ele=a[*top];
	*top=*top-1;
	return ele;	
	}
}
void display(int a[],int top)
{
	if(top==-1)
	printf("stack empty!!!");
	else
	printf("stack elements are:\n");
	while(top>=0)
	printf("%d",a[top--]);
}
int main()
{
	int i,choice,top=-1,*a;
	printf("enter the size of the array");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	while(1)
	{
		printf("\n1.push\n2.pop\n3.display\n.4.exit\n");
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push(a,&top);
			break;
			case 2:printf("\nelement popped is:%d",pop(a,&top));
			break;
			case 3:display(a,top);
			break;
			case 4:exit(0);
			default:printf("invalid choice");
			
		}
	}
}

