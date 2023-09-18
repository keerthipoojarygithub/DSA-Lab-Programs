#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[30][30],b[30][30],c[50][50];
	int m,n,p,q,i,j,k;
	printf("enter the order of matrix A\n");
	scanf("%d%d",&m,&n);
	printf("enter the order of matrix B\n");
   scanf("%d%d",&p,&q);
   if(n!=p)
   {
   	printf("multiplication not possible");
   	exit(0);
   }
   else
   {
   	printf("Enter the elements of matrix A\n");
   	for(i=0;i<m;i++)
   	{
   	 for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
	    }  
    }
	printf("enter the elements of matrix B\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	 } 
	 printf("\n Matrix A\n");
	 for(i=0;i<m;i++)
   	{
   		printf("\n");
   	 for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
	    }  
   }
   printf("\n Row major order:\n");
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%d\t",a[i][j]);		
	    }
	    printf("\n");
	 }
	 printf("\n column major order:\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<m;j++)
	 	{
	 		printf("%d\t",a[j][i]);
	 		
	    }
	    printf("\n");
     }
   printf("\n Matrix B\n");
   for(i=0;i<p;i++)
	{
		printf("\n");
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
	 } 
	 printf("\n Row major order:\n");
	 for(i=0;i<p;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		printf("%d\t",b[i][j]);
	 		
	    }
	    printf("\n");
	 }
	 printf("\n column major order:\n");
	 for(i=0;i<q;i++)
	 {
	 	for(j=0;j<p;j++)
	 	{
	 		printf("%d\t",b[j][i]);
	 		
	    }
	    printf("\n");
	 }
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		c[i][j]=0;
	 		for(k=0;k<n;k++)
	 		c[i][j]=c[i][j]+a[i][k]*b[k][j];
		 }
	 }
	 printf("\n product of matrix A and B is:Matrix C\n");
	 for(i=0;i<m;i++)
	 {
	 	printf("\n");
	 	for(j=0;j<q;j++)
	 	{
	 		printf("%d\t",c[i][j]);
		 }
	 }
	   
    }
    return 0;
}




