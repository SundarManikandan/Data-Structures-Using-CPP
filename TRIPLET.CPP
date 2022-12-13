#include<iostream.h>
#include<conio.h>
void triplet(int arr[],int n)
{
int ans=0,ar[3];
for(int i=0;i<n-2;i++)
{
for(int j=i+1;j<n-1;j++)
{
for(int k=j+1;k<n;k++)
{
if(arr[i]+arr[j]+arr[k]==0){
ans=1;
ar[0]=arr[i];
ar[1]=arr[j];
ar[2]=arr[k];
}
}
}
}
if(ans==1)
{
cout<<"Triplet  found..."<<endl;
for(int i=0;i<3;i++) {
cout<<" "<<ar[i];
}
}
else
cout<<"Triplet no found!!!";
}
void main()
{
int size;
clrscr();
cout<<"Enter the size:";
cin>>size;
cout<<"Enter the elements:";
int*arr=new int(size);
for(int i=0;i<size;i++)
cin>>arr[i];
triplet(arr,size);
getch();
}
