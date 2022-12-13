#include<iostream.h>
#include<conio.h>
int queue[5],n=5,front=-1,rear=-1;
void enqueue(int val)
{
if(rear==n-1)
cout<<"Overflow";
else
{
if(front==-1)
front=0;
rear++;
queue[rear]=val;
}
}
void dequeue()
{
if((front==-1)||(front>rear))
cout<<"Queue overflow";
else
{
cout<<"The popped element is:"<<queue[front];
front++;
}
}
void display()
{
if((front==-1)||(front>rear))
cout<<"Empty";
else
{
cout<<"Queue elements are:";
for(int i=front;i<rear;i++)
cout<<queue[i];
}
}
void main()
{
clrscr();
int choice,val;
cout<<"1.enqueue";
cout<<"2.dequeue";
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
enqueue(val);
break;
}
case 2:
{
dequeue();
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
