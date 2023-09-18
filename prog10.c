#include<stdio.h>
#include<stdlib.h>
int key[20],n,m;
int *ht,index;
int count=0;
void insert(int key)
{
	index=key%m;
	while(ht[index]!=-1)
	{
		index=(index+1)%m;
		
	}
	ht[index]=key;
	count++;
}
void display()
{
	int i;
	if(count==0)
	{
		printf("\n Hash table is Empty!!!");
		return;
	}
	printf("Hash table contents are:");
	for(i=0;i<m;i++)
	printf("\n T[%d]-->%d",i,ht[i]);
}
int main()
{
	int i;
	printf("\n Enter the number of employee records(N):");
	scanf("%d",&n);
	printf("Enter the two digit memory locations(m)for hash table:");
	scanf("%d",&m);
	ht=(int *)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	ht[i]=-1;
	printf("enter a 4 digit key values for N employee records:");
	for(i=0;i<n;i++)
	scanf("%d",&key[i]);
	for(i=0;i<n;i++)
	{
		if(count==m)
		{
			printf("Hash table is full.cannot insert record %d key into hash table ",i+1);
			break;
		}
		insert(key[i]);
	}
	display();
	
}

