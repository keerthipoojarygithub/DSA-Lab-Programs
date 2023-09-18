#include<stdio.h>
#include<stdlib.h>
int q[20],front=0,rear=-1;
int vertices[10];
int enqueue(int element)
{
	rear=rear+1;
	q[rear]=element;
}
int dequeue(int n)
{
	int i,element;
	element=q[front];
	front=front+1;
	for(i=0;i<n;i++)
	{
		if(element==vertices[i])
		
		break;
	}
	return;
}
void bfs(int graph[10][10],int n,int visited[],int u)
{
	int i,vertex;
	visited[u]=1;
	printf("%d\t",vertices[u]);
	enqueue(vertices[u]);
	
while(front!=rear+1)
{
	vertex=dequeue(n);
	for(i=0;i<n;i++)
	{
		if(graph[vertex][i]==1&&visited[i]==0)
		{
			printf("%d\t",vertices[i]);
			visited[i]=1;
			enqueue(vertices[i]);
		}
	}
}
}
int main()
{
	int graph[10][10],visited[10],n,i,j,u=-1,fvisited;
	printf("\n Enter the no of vertices:");
	scanf("%d",&n);
	printf("\n enter vertices:");
	for(i=0;i<n;i++)
	{
		visited[i]=0;
		scanf("%d",&vertices[i]);
	}
	printf("enter the adjacency matrix representation:");
	for(i=0;i<n;i++)
	{
		visited[i]=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	printf("enter the first element to be visited:");
	scanf("%d",&fvisited);
	for(i=0;i<n;i++)
	{
		if(fvisited==vertices[i])
		{
			u=i;
			break;
		}
	}
	printf("\n BFS representation of Graph is:");
	bfs(graph,n,visited,u);
}
