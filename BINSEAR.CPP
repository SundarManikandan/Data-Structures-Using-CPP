#include<iostream.h>
#include<conio.h>
int binarysearch(int arr[],int l,int r,int x)
{
while(l<=r)
{
int m=l+(r-1)/2;
if(arr[m]==x)
return m;
if(arr[m]<x)
l=m+1;
else
r=m-1;
}
return -1;
}
void main()
{
int size,target;
cout<<"Enter the size:";
cin>>size;
cout<<"Enter the values:";
int*arr=new int(size);
for(int i=0;i<size;i++)
cin>>arr[i];
cout<<"Enter the Index value to find";
cin>>target;
int result=binarysearch(arr,0,size-1,target);
(result==-1)?cout<<"nto found":cout<<"element found at index"<<result;
getch();
}