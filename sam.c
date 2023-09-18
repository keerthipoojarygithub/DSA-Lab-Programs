#include<stdio.h>
int main()
{
	int i,n,a[10],sum=0;
	printf("enter n");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
	printf("elements are:");
	for(i=n-1;i>=0;i--)
	printf("%d",a[i]);
	
}
