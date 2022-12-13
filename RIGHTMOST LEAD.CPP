#include<iostream.h>
#include<conio.h>
void printleaders(int arr[],int size)
{
cout<<"The Right Most Leaders are:";
for(int i=0;i<size;i++)
{
for(int j=i+1;j<size;j++)
{
if(arr[i]<=arr[j])
break;
}
if(j==size)
cout<<arr[i];
}
}
void main()
{
clrscr();
cout<<"Print leaders ";
int size;
cout<<"Enter the size of array";
cin>>size;
cout<<"Enter values:";
int*arr=new int(size);
for(int i=0;i<size;i++)
cin>>arr[i];
printleaders(arr,size);
getch();
}