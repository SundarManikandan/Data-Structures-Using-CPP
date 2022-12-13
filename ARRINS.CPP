#include<iostream.h>
#include<conio.h>
void main()
{
int arr[15],pos,val,size;
clrscr();
cout<<"Enter the arry size:";
cin>>size;
cout<<"Enter"<<size<< "elements:";
for(int i=0;i<size;i++)
cin>>arr[i];
cout<<"Enter the position of array:";
cin>>pos;
cout<<"Enter the value to be inserted:";
cin>>val;
for(i=size-1;i>=pos-1;i--)

arr[i+1]=arr[i];
arr[pos-1]=val;

cout<<"The result of array is:";
for(i=0;i<=size;i++)
cout<<arr[i];
getch();
}