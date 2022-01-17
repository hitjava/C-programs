#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class bank
{	int acno;
	char name[30];
	char actype;
	float balance;
	public:
	void input( );
	void output( );
	void deposit(float amt);
	void withdraw(float amt);
	int retno ( );
};
void bank :: input( )
{	cout<<"Enter your account number:";
	cin>>acno;
	cout<<"Enter your name:";
	gets(name);
	cout<<"Enter your account type:";
	cin>>actype;
	cout<<"Enter your balance:";
	cin>>balance;
}
void bank :: output( )
{	printf("%4i  ",acno);
	printf("%-10s  ",name);
	printf("%-6c   ",actype);
	printf("%5.2f\n  ",balance);
}
void bank :: deposit(float amt)
{	balance+=amt;}
void bank :: withdraw(float amt)
{	if(balance-amt>=1000)
		balance-=amt;
	else
		cout<<"Invalid Amount";
}
int bank :: retno( )
{	return acno;}
void ADD(bank A[],int &n)
{	cout<<"Enter the total number of customers:";
	cin>>n;
	for(int i=0;i<n;i++)
      A[i].input( );
}
void print(bank A[],int n)
{	cout<<"\t\t\t 3.CLASSES AND OBJECT:BANK OPERATION\n";
	cout<<"\t\t\t ___________________________________\n";
	printf("%6s  ","ACNO");
	printf("%-10s  ","Name");
	printf("%-8s ","AcType");
	printf("%-6s\n  ","Balance");
	for(int i=0;i<n;i++)
	{	A[i].output( );
	}
}
void incr(bank A[],int n)
{	int acn,flag=0;
	float amt;
	cout<<"Enter your account number:";
	cin>>acn;
	for(int i=0;i<n;i++)
		if(acn==A[i].retno( ))
		{	cout<<"Enter the amount to be deposited:";
			cin>>amt;
			if(amt>0)
			A[i].deposit(amt);
		else
			cout<<"Invalid Amount";
		flag=1;
		}
	if(flag==0)
		cout<<"Invalid Account Number";
}
void decr(bank A[],int n)
{	int acn,flag=0;
	float amt;
	cout<<"Enter your account number:";
	cin>>acn;
	for(int i=0;i<n;i++)
		if(acn==A[i].retno( ))
		{	cout<<"Enter the amount to be withdrawn:";
			cin>>amt;
			if(amt>0)
			A[i].withdraw(amt);
		else
			cout<<"Invalid Amount";
		flag=1;
		}
	if(flag==0)
		cout<<"Invalid Account Number";
}
void main( )
{	bank A[10];
	int n,ch;
	do
	{	clrscr( );
		cout<<"\t\t\t 3.CLASSES AND OBJECT:BANK OPERATION \n";
		cout<<"\t\t\t ___________________________________ \n";
		cout<<"\t\t\t 1.ADD";
		cout<<"\n\t\t\t 2.Display";
		cout<<"\n\t\t\t 3.Deposit";
		cout<<"\n\t\t\t 4.Withdraw";
		cout<<"\n\t\t\t 5.Exit\n";
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{	case 1:ADD(A,n);break;
			case 2:print(A,n);break;
		case 3:incr(A,n);break;
		case 4:decr(A,n);break;
		}
		getch( );
	}while(ch<=4);
   getch( );
}
