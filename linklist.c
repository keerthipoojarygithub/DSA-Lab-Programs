//singly linked lists
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
typedef struct node*NODE;
NODE first,fir1,fir2,fir3;
NODE push(NODE first);
void display(NODE first);
NODE pop(NODE first);
void search(NODE first);
NODE insertq(NODE first);
NODE deleteq(NODE first);
NODE concateq(NODE fir1,NODE fir2);
int main()
{
	int ch,op1;
	NODE res,cur;
	first=(NODE)malloc(sizeof(NODE));
	first=NULL;
	while(1)
	{
		printf(" ");
		printf("\n---MENU---\n1.PUSH\n2.DISPLAY\n.3POP\n.4.SEARCH\n.5.INSERT QUEUE\n.6.CONCATE QUEUE\n.7.EXIT\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:first=push(first);
			break;
			case 2:display(first);
			break;
			case 3:first=pop(first);
			break;
			case 4:search(first);
			break;
			case 5:printf("Which queue you want to insert in the info 1 or2");
			scanf("%d",&op1);
			if(op1==1)
			{
				fir1=insertq(fir1);
				break;
			}
			fir2=insertq(fir2);
			break;
			case 6:res=concateq(fir1,fir2);
			cur=res;
			if(res==NULL)
			{
				printf("List is empty---\n");
				break;
			}
			printf("Info of students are:");
			 while(cur!=NULL)
			 {
			 	printf("\t%d\t",cur->info);
			 	cur=cur->link;
			 }
			 break;
			 case 7:exit(0);
			 break;
			 default:printf("Invalid choice");
			 break; 
		}
	}
}
NODE push(NODE first)
{
	NODE temp;
	int item;
	temp=(NODE)malloc(sizeof(NODE));
	printf("\n Enter the item to insert");
	scanf("%d",&item);
	temp->info=item;
	temp->link=first;
	return temp;
}
void display(NODE first)
{
	NODE cur;
	cur=first;
	if(first==NULL)
	{
		printf("list is empty---\n");
		return;
	}
	printf("Elements are:");
	while(cur!=NULL)
	{
		printf("%d\t",cur->info);
		cur=cur->link;
	}	
}
void search(NODE first)
{
	NODE s;
	int item,flag=0;
	s=first;
	printf("\n Enter the element to search");
	scanf("%d",&item);
	while(s!=NULL)
	{
		if(s->info=item)
		{
			flag=1;
			printf("\n Element found at %p",s);
			break;
		}
		s=s->link;
	}
	if(flag==0)
	printf("element not found");
	return;
}
NODE pop(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("List is empty cannot delete\n");
		return NULL;
	}
	temp=first;
	temp=first->link;
	printf("item deleted=%d",first->info);
	free(first);
	return temp;
}
NODE insertq(NODE fir)
{
	int item;
	NODE temp,cur;
	temp=(NODE)malloc(sizeof(NODE));
	printf("\n Enter the item to insert:");
	scanf("%d",&item);
	temp->info=item;
	if(fir==NULL)
	{
	  temp->link=NULL;
	  printf("\n Elements pushed successfully...");
	  return temp;	
	}
	cur=fir;
	while(cur->link!=NULL)
	{
		cur=cur->link;
	}
	cur->link=temp;
	temp->link=NULL;
	printf("\n---Pusing is done");
	return fir;
}
NODE concateq(NODE fir1,NODE fir2)
{
	if(fir1==NULL)
	return fir2;
	if(fir2==NULL)
	return fir1;
	NODE cur;
	 cur=fir1;
	while(cur->link!=NULL)
	{
 		cur=cur->link;
	}
	cur->link=fir2;
	return fir1;	
}
