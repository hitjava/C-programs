#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void input(int a[][5],int&N,int M)
{  for(int i=0;i<N;i++)
	cout<<"Enter the array";
   cin>>a[i][];
   cin>>N>>M;
}
void row(int a[][5],int N,int M,int r[])
{
	for(int i=0;i<N;i++)
   {
   	r[i]=0;
      for(int j=0;j<M;j++)
      r[i]+=a[i][j];
   }
}
void col(int a[][5],int N,int M,int c[])
{
	for(int j=0;j<M;j++)
   {
   	c[j]=0;
      for(int i=0;i<N;i++)
      c[j]+=a[i][j];
   }
}
void display(int a[][5],int& N,int&M, int r[5],int c[5])
{  clrcr();
	cout<<"Matrix\t\t\t";
   cout<<"Row Sum\n";
	for(int i=0;i<N;i++)
   {
   	for(int j=0;j<M;j++)
           cout<<a[i][j]<<"\t";
      cout<<"="<<r[i]<<endl;
   }
   cout<<"_______________\n";
   cout<<"Column Sum\n";
      for(int j=0;j<M;j++)
          cout<<c[j]<<"\t";
}
void main()
{  int a[5][5], N, M, int r[5],int c[5];
	cout<<"Enter no of rows"
	cin>>N;
   couy<<"Enter no. of columns";
   cin>>M;
   input(int a[][5],int&N,int M);
   row(int a[][5],int N,int M,int r[]);
   col(int a[][5],int N,int M,int c[]);
   display(int a[][5],int& N,int&M, int r[5],int c[5]);
   getch();
}


