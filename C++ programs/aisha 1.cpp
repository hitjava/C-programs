#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
class sudent
{
	char name[50];
   int rno;
   float marks,total,result;
   public:
   void input();
   void cal();
   void output();
}st[10];
void input(student st[],int&n)
{
	cout<<"Enter the no of students";
   cin>>n;
   for(int i=0;i<n;i++)
    {
   	cin>>st[i].rno;
      gets(st[i].name);
      for(int j=0;j<5;j++)
      cin>>st[i].marks[j];
     }
}
void cal(student st[],int n)
{
	int c;
   for(int i=0;i<n;i++)
    {
   	st[i].total=0;c=0;
      for(int j=0;j<5;j++)
        {
      	st[i].total+=st[i].marks[j];
         if(st[i].marks[j]<=33)
         c++;
        }

      if(c==0)
      strcpy(st[i].result,"pass");
      else
      if(c==1)
      strcpy(st[i].result,"comp");
      else
      if(c==2)
      strcpy(st[i].result,"fail");
      }
}
void output(student st[],int n)
{
	for(int i=0;i<n;i++)
   {
   	printf("%2i  ",st[i].rno);
      printf("%-10s  ",st[i].name);
      for (int j=0;j<5;j++)
      {
      printf("%5.2f  ",st[i].marks[j]);
      printf("%5.2f  ",st[i].total);
      printf("%-4s  \n",st[i].result);
      }
   }
}
void main()
{
	student st[10];
   int n;
   input(st,n);
   cal(st,n);
   output(st,n);
}




