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
void numberofnodes(NODE first);
void number_ofnodes(NODE front);
int main()
{
	int choice;
	first=(NODE)malloc(sizeof(NODE));
	front=(NODE)malloc(sizeof(NODE));
	first=NULL;
	front=NULL;
	while(1){
		printf("\n1.push_DLL_Stack\n2.pop_DLL_Stack\n3.display_stack\n4.number_of_nodes_in_stack\n5.DLL_queue_insert\n6.DLL_queue_delete\n7.DLL_queue_display\n8.number_of_nodes_in_queue\n9.exit\n");
		printf("enter the option:");
		scanf("%d",&choice);
		switch(choice){
			case 1 : first=push(first);break;
			case 2 : first=pop(first);break; 
			case 3 : display(first);break;
			case 4 : numberofnodes(first);break;
			case 5 : front=queue_insert(front);break;
			case 6 : front=queue_delete(front);break;
			case 7 : queue_display(front);break;
			case 8 : number_ofnodes(front);break;
			case 9 : exit(0);break;
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
printf("Item deleted = %d%%s%s%s\n",first->id,first->name,first->branch,first->specialization);
free(first);
return temp;
}
	
NODE display(NODE first)
{
	NODE cur;
	cur=first;
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
	}
	return;
}

void numberofnodes(NODE first)
{
	int count=0;
	NODE temp;
	temp=first;
	if(first==NULL)
	{
		printf(" 0 \n");
		return;
	}
	while(temp!=NULL)
	{
		count++;
		temp=temp->rlink;
	}
	printf("number of node is %d",count);
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
NODE queue_delete(NODE frontt)
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


	/*else
	{
		id=queue[front];
		if(front==rear)
		{
			front=1;
			rear=1;
		}
		else
		{
			front=front+1;
		}
		printf("the node is deleted successfully");
	}
	
}
*/

NODE queue_display(NODE front)
{
	NODE cur;
	cur=front;
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
	}
	return;
}
void number_ofnodes(NODE front)
{
	int count=0;
	NODE temp;
	temp=front;
	if(front==NULL)
	{
		printf("  \n");
		return;
	}
	while(temp!=NULL)
	{
		count++;
		temp=temp->rlink;
	}
	printf("number of node is %d",count);
}  
