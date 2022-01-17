#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct employee
{
	char name[20],desg[10];
   float bpay,hra,da,gross,net,tax;
};
void input(employee emp[],int&n)
{
	cout<<"Enter number of employees:";
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	cout<<"\n Employee"<<endl<<endl;

      cout<<"Enter employee name";
      gets(emp[i].name);
      cout<<"Enter base pay";
      cin>>emp[i].bpay;
      cout<<"Enter employee designation";
      gets(emp[i].desg);
   }
}
void calc(employee emp[],int n)
{
	for(int i=0;i<n;i++)
   {
   	if(emp[i].bpay<=3500)
         emp[i].da=0.75*emp[i].bpay;
      else if(emp[i].bpay<=6000)
        emp[i].da=0.60*emp[i].bpay;
      else
         emp[i].da=0.25*emp[i].bpay;
      if(emp[i].bpay<=2500)
        emp[i].hra=300;
      else if(emp[i].bpay<=5000)
        emp[i].hra=500;
      else
         emp[i].hra=750;
      emp[i].gross=emp[i].hra+emp[i].da+emp[i].bpay;
      emp[i].tax=0.15*emp[i].gross;
      emp[i].net=emp[i].gross-emp[i].tax;
    }
}
void output(employee emp[],int n)
{
	clrscr();
   cout<<"\t\t\tEmlpoyee Pay Process\n";
   cout<<"\t\t\t____________________\n\n\n";
   printf("%7s  ","NAME");
   printf("%7s  ","DESG");
   printf("%7s  ","BASIC");
   printf("%7s  ","DA");
   printf("%7s  ","HRA");
   printf("%7s  ","GROSS");
   printf("%7s  ","TAX");
   printf("%7s  ","NET");
   cout<<endl;
   for(int i=0;i<n;i++)
   {
   	printf("%7s  ",emp[i].name);
      printf("%7s  ",emp[i].desg);
      printf("%7.2f  ",emp[i].bpay);
      printf("%7.2f  ",emp[i].da);
      printf("%7.2f  ",emp[i].hra);
      printf("%7.2f  ",emp[i].gross);
      printf("%7.2f  ",emp[i].tax);
      printf("%7.2f  ",emp[i].net);
      cout<<endl;
   }
}
void main()
{
	employee emp[10];
   int n;
   input(emp,n);
   calc(emp,n);
   output(emp,n);
   getch();
}



