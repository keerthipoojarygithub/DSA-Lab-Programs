#include<stdio.h>
#include<stdlib.h>
int top = -1;
int *stack,size;
void push(int item);
int pop();
void display();

int main()
{
        int choice,item;
        printf("Enter the size");
        scanf("%d",&size);
        stack=(int *)malloc(size*sizeof(int));
        while(1)
        {
                printf("\n1.Push\n");
                printf("2.Pop\n");
                printf("3.Display all stack elements\n");
                printf("4.exit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&item);
                        push(item);
                        break;
                 case 2:
                        item = pop();
                        printf("\nPopped item is : %d\n",item );
                        break;
                 case 3:
                        display();
                        break;
                 case 4:
				         exit(0);  
                 default:
                        printf("\nWrong choice\n");
                }//End of switch/
        }//End of while/

        return 0;

}//End of main()/

void push(int item)
{
	if(top == size - 1)        
    printf("\nSTACK OVERFLOW\n");
	else
	{
		    
        top = top+1;
        stack[top] = item;
    }
}
int pop()
{
        int item;
        item = stack[top];
        top = top-1;
        
        return item;
}//End of pop()/
void display()
{
        int i;
    printf("\nStack elements :\n\n");
        for(i=top;i>=0;i--)
                printf(" %d\n", stack[i]);
        printf("\n");
}//End of display()/
