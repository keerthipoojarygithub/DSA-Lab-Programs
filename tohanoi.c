#include<stdio.h>
void towers(int num,char beg,char aux,char end);
int main()
{
	int num;
	printf("enter the number of disks:\n");
	scanf("%d",&num);
	printf("the sequence moves involved in tower of hanoi are:");
	towers(num,'a','b','c');
	return(0);
}
void towers(int num,char beg,char aux,char end)
{
	if(num==1)
	printf("move disk 1 from peg %c to peg %c\n",beg,end);
	else
	{
		towers(num-1,beg,end,aux);
		printf("move disk %d from peg %c to peg %c\n",num,beg,end);
		towers(num-1,aux,beg,end);
	}
}

