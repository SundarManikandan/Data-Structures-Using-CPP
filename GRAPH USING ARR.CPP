#include<iostream.h>
#include<conio.h>
int vertarr[20][20];
int count=0;
void display_matrix(int v)
{
int i,j;
for(i=0;i<v;i++)
{
for(j=0;j<v;j++)
{
cout<<vertarr[i][j]<<" ";
}
cout<<endl;
}
}
void add_edge(int u,int v)
{
vertarr[u][v]=1;
vertarr[v][u]=1;
}
int main(int argc,char*argv[])
{
int v=5;
clrscr();
cout<<"Matrix in Array Using Tree"
add_edge(0,4);
add_edge(0,3);
add_edge(4,5);
add_edge(6,1);
add_edge(1,3);
add_edge(2,5);
display_matrix(v);
getch();
}