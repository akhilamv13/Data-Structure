#include<stdio.h>
#include<stdlib.h>
struct tree
{
struct tree *left;
int data;
struct tree *right;
};
struct tree *createtree()
{
int item;
struct tree *newnode;
newnode=(struct tree*)malloc(sizeof(struct tree));
printf("\nEnter element to insert(Enter 0 if you dont have to create node):");
scanf("%d",&item);
if(item==0)
{
return NULL;
}
newnode->data=item;
printf("\nenter the data inserted at the left of %d",newnode->data);
newnode->left=createtree();
printf("\nenter the data inserted at the right of %d",newnode->data);
newnode->right=createtree();
return newnode;
}
void preorder(struct tree *temp)
{
if(temp!=NULL)
{
printf("%d\t",temp->data);
preorder(temp->left);
preorder(temp->right);
}
}
void inorder(struct tree *temp)
{
if(temp!=NULL)
{
inorder(temp->left);
printf("%d\t",temp->data);
inorder(temp->right);
}
}
void postorder(struct tree *temp)
{
if(temp!=NULL)
{
postorder(temp->left);
postorder(temp->right);
printf("%d\t",temp->data);
}
}
void main()
{
struct tree *root;
root=createtree();
printf("\nPreorder traversal of the tree:");
preorder(root);
printf("\nInorder traversal of the tree:");
inorder(root);
printf("\nPostorder traversal of the tree:");
postorder(root);
}





