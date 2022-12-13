#include<iostream.h>
#include<conio.h>
int stack[100],top;
void push(int val)
{
stack[top]=val;
top++;
}
void pop()
{
top--;
}
int min(int x,int y){
return (x<y)?x:y;
}
int maxwater(int height[],int n)
{
int ans=0;
for(int i=0;i<n;i++)
{
while((stack!=0)&&(height[stack[top]]<height[i]))
{
int pop_height=height[stack[top]];
pop();
if(top<0)
break;
int distance=i-stack[top]-1;
int min_height=min(height[stack[top]],height[i]-pop_height);
ans=distance*min_height;
}
push(i);
}
return ans;
}
void main()
{
int size;
int arr[40];
cout<<"Enter the size:";
cin>>size;
cout<<"Enter values:";
for(int i=0;i<size;i++)
{
cin>>arr[i];
}
cout<<"Maximum Level of Water:"<<maxwater(arr,size)<<"blocks";
getch();
}