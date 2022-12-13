#include<iostream.h>
#include<conio.h>
int stack[100],n=100,top=-1;
void push(int val)
{
if(top>=n-1)
cout<<"stack overflow";
else{
top++;
stack[top]=val;
}
}
void pop()
{
if(top<=-1)
cout<<"Stack empty";
else {
cout<<"The popped element is:"<<stack[top];
top--;
}
}
void display()
{
if(top>=0)
cout<<"The elements in stack are:";
else
cout<<"Stack is empty";
for(int i=top;i>=0;i--)
cout<<stack[i];
}
void main()
{
clrscr();
int choice,val;
cout<<"1.Push";
cout<<"2.Pop";
cout<<"3.Display";
cout<<"4.Exit";
while(choice!=4)
{
cout<<"Enter the choice:";
cin>>choice;
switch(choice)
{
case 1:
{
cout<<"Enter the value:";
cin>>val;
push(val);
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
cout<<"exit";
break;
}
default:
{
cout<<"Invalid";
}
}

}}

