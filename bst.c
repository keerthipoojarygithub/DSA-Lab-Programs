#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node*left;
    struct node*right;
    int info;
};
typedef struct node * NODE;
NODE insertlevelorder(int a [],int i, int n)
{
    NODE root;
    if(i<n)
    {
        root=(NODE)malloc(sizeof(NODE));
        root->info=i;
        root->left=NULL;
        root->right=NULL;
        root->left=insertlevelorder(a,n,2*i+1);
        root->right=insertlevelorder(a,n,2*i+2);
    }
    return root;
}
void inorder(NODE root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root-> info);
        inorder(root->right);
    }
}
int main() 
{
    
   int a[]={1,2,3,4,5,6,7,8,9,11};
    int n=10;
    NODE root= insertlevelorder(a,n,0);
    inorder(root);
    
}
