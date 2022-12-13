#include<iostream.h>
#include<conio.h>
struct Node
{
int data;
Node*link;
};
Node*top=NULL;
void push(int val)
{
Node*ptr=new Node();
ptr->data=val;
ptr->link=top;
top=ptr;
}
void pop()
{
Node*ptr=top;
top=top->link;
delete(ptr);
}
void main()
{
clrscr();
int max,ans,arr[100];
cout<<"Enter the range :";
cin>>max;
cout<<"Enter elements:";
for(int i=0;i<max;i++)
{
cin>>arr[i];
push(arr[i]);
}
for(i=0;i<max;i++)
{
if((top->data)==arr[i])
ans=1;
else
ans=0;
pop();
}
if(ans==1)
cout<<"The Given is Palindrome....";
else
cout<<"Not a palindrome!!!!";
getch();
}