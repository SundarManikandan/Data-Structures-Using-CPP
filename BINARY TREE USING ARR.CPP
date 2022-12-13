#include<iostream.h>
#include<conio.h>
int complete_node=10;
char tree[]={'\0','A','B','C','D','E','\0','\0','F','G','\0'};
int get_right_child(index)
{
if(tree[index]!='\0' && ((2*index)+1)< complete_node)
return (2*index)+1;
return -1;
}
int get_left_child(index)
{
if(tree[index]!='\0' && (2*index)< complete_node)
return 2*index;
return -1;
}
void preorder(index)
{
if(index>0 && tree[index]!='\0')  {
cout<<tree[index];
preorder(get_left_child(index));
preorder(get_right_child(index));
}
}
void inorder(index)
{
if(index>0 && tree[index]!='\0')
{
inorder(get_left_child(index));
cout<<tree[index];
inorder(get_right_child(index));
}
}
void postorder(index)
{
if(index>0 && tree[index]!='\0')
{
postorder(get_left_child(index));
postorder(get_right_child(index));
cout<<tree[index];
}
}
void main()
{
clrscr();
preorder(1);
cout<<endl;
inorder(1);
cout<<endl;
postorder(1);
getch();
}
