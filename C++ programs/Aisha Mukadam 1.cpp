#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

struct student
{
	int rno;
   char name[25];
   float marks[5];
   float tot;
   char res[5];
}st;
void input(student st[],int&n)
{
	cout<<"Enter the number of students :";
   cin>>n;
   for (int i=0;i<n;i++)
   {
   	cout<<"\n\n Student"<<(i+1)<<endl<<endl;
      cout<<"Enter the roll no. of the student";
      cin>>st[i].rno;
      cout<<"Enter the name of the student";
      gets(st[i].name);
      cout<<"Enter the students marks in -\n";
      for(int j=0;j<5;j++)
      {
      	cout<<"\t Student"<<(j+1)<<":";
         cin>>st[i].marks[j];
      }
   }
}
void calc(student st[],int n)
{
	for(int i=0;i<n;i++)
   {
   	st[i].tot=0;
      int c=0;
      for(int j=0;j<5;j++)
      {
      	st[i].tot+=st[i].marks[j];
         if(st[i].marks[j]<=33.00)
         c++;
      }
      if(c==0)
         strcpy(st[i].res,"PASS");
      else if(c==1)
          strcpy(st[i].res,"COMP");
      else
          strcpy(st[i].res,"FAIL");
   }
}
void output(student st[],int n)
{
	 cout<<"\t\t\t STUDENT MARK ENTERY PROCESS \n";
    cout<<"\t\t\t____________________________ \n";
    printf("%10s  ","NO");
    printf("%5s  ","NAME");
    for(int j=0;j<5;j++)
        printf("%2s  ","SMARK");
    printf("%5s  ","TOTAL");
    printf("%4s  ","RSLT");
    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
    	printf("%10i  ",st[i].rno);
      printf("%5s  ",st[i].name);
      for(int j=0;j<5;j++)
      	printf("%5.2f  ",st[i].marks[j]);
         printf("%5.2f  ",st[i].tot);
         printf("%4s  ",st[i].res);
         cout<<endl<<endl;
    }
}
void main()
{
	student st[10];
   int n;
   input(st,n);
   calc(st,n);
   clrscr();
   output(st,n);
   getch();
}





