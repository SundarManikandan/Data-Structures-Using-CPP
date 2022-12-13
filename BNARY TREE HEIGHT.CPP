#include<iostream.h>
#include<conio.h>
struct Node
{
int key;
Node* left,* right;
Node(int key)
{
this->key=key;
this->left=this->right=NULL;
}
};
int max(int x,int y)
{
return x>y ? x:y;
}
int height(Node*root)
{
if(root==NULL)
return 0;
return 1+max(height(root->left),height(root->right));
}
void main()
{
clrscr();
Node*root=new Node(4);
root->left=new Node(5);
root->left->left=new Node(7);
root->left->right=new Node(9);
root->right=new Node(1);
root->right->right=new Node(3);
root->right->right->right=new Node(8);
root->right->right->right->right=new Node(9);
cout<<"The height of Binary Tree is:"<<height(root);
getch();
}
