#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	int id;
	char name[10],branch[4],specialization[20];
	struct node *llink;
	struct node *rlink;
};
typedef struct node *NODE;
NODE first,cur,front;
NODE push(NODE first);
NODE pop(NODE first);
NODE display(NODE first);
NODE queue_insert(NODE front);
NODE queue_delete(NODE front);
NODE queue_display(NODE front);
int main()
{
	int choice;
	first=(NODE)malloc(sizeof(NODE));
	front=(NODE)malloc(sizeof(NODE));
	first=NULL;
	front=NULL;
	while(1){
		printf("\n1.push Stack\n2.pop Stack\n3.display stack\n4.queue insert\n5.queue delete\n6.DLL_queue_display\n7.exit\n");
		printf("enter the option:");
		scanf("%d",&choice);
		switch(choice){
			case 1 : first=push(first);break;
			case 2 : first=pop(first);break; 
			case 3 : display(first);break;
			case 4: front=queue_insert(front);break;
			case 5 : front=pop(front);break;
			case 6 : queue_display(front);break;
			case 7 : exit(0);
					 break;
			default : printf("invalid option");
		}
	}
}
NODE push(NODE first)
{
	NODE temp;
	char name[10],branch[4],specialization[20];
	int id;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the professor id:");
	scanf("%d",&id);
	printf("enter the name of the professor:");
	scanf("%s",name);
	printf("enter the branch of the professor:");
	scanf("%s",temp->branch);
	printf("enter the area of specialization:");
	scanf("%s",temp->specialization);
	temp->id=id;
	strcpy(temp->name,name);
	temp->llink=NULL;	
	if(first==NULL)
	{
		temp->llink=NULL;
		temp->rlink=NULL;
		return temp;
	}
	first->llink=temp;
	temp->rlink=first;
	return temp;
}

NODE pop(NODE first)
{
NODE temp;
if(first == NULL)
{
printf("List is empty. Cannot Delete\n");
return first;
}
temp=first;
temp=temp->rlink;
printf("Item deleted = %d\n",first->id);
free(first);
return temp;
}
	
NODE display(NODE first)
{
	NODE cur;
	cur=first;
	int count=0;
	if(first==NULL)
	{
		printf("\nLIst is empty");
		return NULL;
	}
	printf("professors list:\n");
	printf("p_id\tp_name\tp_branch\tp_specialization\n");
	while(cur!=NULL)
	{
		printf("%d\t%s\t%s\t%s",cur->id,cur->name,cur->branch,cur->specialization);
		cur=cur->rlink;
		printf("\n");
		count=count+1;
	}
		printf("\nnumber of professors is %d\n",count);
}
NODE queue_insert(NODE front)
{
	NODE temp,cur;
	char name[10],branch[4],specialization[20];
	int id;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the professor id:");
	scanf("%d",&id);
	printf("enter the name of the professor:");
	scanf("%s",name);
	printf("enter the branch of the professor:");
	scanf("%s",temp->branch);
	printf("enter the area of specialization:");
	scanf("%s",temp->specialization);
	temp->id=id;
	strcpy(temp->name,name);	
	if(front==NULL)
	{
		temp->llink=NULL;
		temp->rlink=NULL;
		return temp;
	}
	cur=front;
	while(cur->rlink!=NULL)
	{
		cur=cur->rlink;
	}
	cur->rlink=temp;
	temp->rlink=NULL;
	return front;
}
NODE queue_delete(NODE front)
{
NODE temp;
if(front == NULL)
{
printf("List is empty. Cannot Delete\n");
return front;
}
temp=front;
temp=temp->rlink;
printf("Item deleted = %d\n",front->id);
free(front);
return temp;
}
NODE queue_display(NODE front)
{
	NODE cur;
	cur=front;
	int count=0;
	if(front==NULL)
	{
		printf("\nLIst is empty\n");
		return NULL;
	}
	printf("professors list:\n");
	printf("p_id\tp_name\tp_branch\tp_specialization\n");
	while(cur!=NULL)
	{
		printf("%d\t%s\t%s\t\t%s",cur->id,cur->name,cur->branch,cur->specialization);
		cur=cur->rlink;
		printf("\n");
			count=count+1;
	}
		printf("number of proffesor is %d",count);
	return;
}
