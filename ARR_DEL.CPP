#include<iostream.h>
#include<conio.h>
void main()
{
int arr[10],size,del,count=0;
clrscr();
cout<<"Enter the size of array:";
cin>>size;
cout<<"Enter the elements:";
for(int i=0;i<size;i++)
cin>>arr[i];
cout<<"Enter the element to be deleted:";
cin>>del;
for(i=0;i<size;i++)
if(arr[i]==del)
for(int j=i;j<size-1;j++)
arr[j]=arr[j+1];
count++;
if(count==0)
cout<<"Element not found!!!!";
else
cout<<"Element deleted sucessfully....";
cout<<"The result is";
for(i=0;i<size-1;i++)
cout<<arr[i];
getch();
}
