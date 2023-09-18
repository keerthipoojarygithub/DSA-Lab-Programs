#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	int k;
	printf("Enter string 1:");
	gets(s1);
	printf("Enter string 2:");
	scanf("%s",s2);
	k=strcmp(s2,s1);
	if(k==0)
	{
		printf("same strings");
	}
		else
		{
		printf("strings are not same");	
		}
		
	}
	

