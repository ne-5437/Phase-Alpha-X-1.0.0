module5-program1
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* left;
struct node* right;
};
struct node* create(int);
struct node* insertleft(struct node*,int);
struct node* insertrigth(struct node*,int);
void preorder(struct node*);
void postorder(struct node*);
void inorder(struct node*);

int main()
{
clrscr();
 struct node* root;
 root=create(1);
 insertleft(root,4);
 insertrigth(root,5);
 insertleft(root->left,8);
 insertleft(root->right,20);
 insertrigth(root->right,9);
 insertrigth(root->left,89);
printf("\n preoder traversal");
preorder(root);
printf("\n postorder traversal");
postorder(root);
printf("\ninorder travseral");
inorder(root);
getch();
return 0;
}
struct node* create(int value)
{
struct node* newnode=(node *)malloc(sizeof(node));
newnode->data=value;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
struct node* insertleft(struct node* root,int value)
{
root->left=create(value);
return root->left;
}
struct node* insertrigth(struct node* root,int value)
{
root->right=create(value);
return root->right;
}


void preorder(struct node * root)
{
if(root==NULL)
{
return;

}
printf("%4d",root->data);
preorder(root->left);
preorder(root->right);
}
void postorder(struct node* root)
{
if(root==NULL)
return;
postorder(root->left);
postorder(root->right);
printf("%4d",root->data);
}
void inorder(struct node* root)
{
if(root==NULL)
return;
inorder(root->left);
printf("%4d",root->data);
inorder(root->right);

}
 
