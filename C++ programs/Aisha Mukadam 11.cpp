#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void heading()
{
	clrscr();
	cout<<"\t\t\t\t 11.Link-Stack \n";
   cout<<"\t\t\t\t _____________ \n\n\n";
}
struct NODE
{	char name[30];
   int no;
   NODE *link;
};

class stack
{	NODE*top;
	public:
   stack( )
   {	top=NULL;
   }
   void push( );
   void pop( );
   void display( );
};
void stack:: push( )
{  heading( );
	cout<<"Node Push\n\n";
	NODE*p=new NODE;
	if(p==NULL)
   	cout<<"Error 912: Allocation Error";
   else
   { 	cout<<"Enter the number:";
   	cin>>p->no;
      cout<<"Enter the name:";
      gets(p->name);
      p->link=top;
      top=p;
   }
}
void stack:: pop( )
{  heading( );
	cout<<"Node pop\n\n";
	if (top==NULL)
   	cout<<"Error 771:Stack Underflow";
   else
   {	cout<<"Node : \n";
		cout<<"Number\t";
      cout<<"Name\t";
      cout<<"Address\n";
      cout<<top->no<<'\t';
      cout<<top->name<<'\t';
      cout<<top<<'\n';
      cout<<"\n Node popped succesfully.";
		NODE *temp = top;
      top=top->link;
      delete temp;
   }
   getch();
}
void stack:: display( )
{	heading();
   cout<<"Node Display\n\n";
	NODE *p =new NODE;
   p=top;
	if (p==NULL)
   	cout<<"Error 619: List is empty.";
   else
   {	printf("%-10s  ","ADDRESS");
      printf("%2s  ","NO");
      printf("%-20s  ","NAME");
      printf("%-10s  ","LINK");
      cout<<"\n\n";
   	do{
      		cout<<p;
      		printf("%4i  ",p->no);
      		printf("%-20s  ",p->name);
      		cout<<(p->link);
      		cout<<"\n";
      		p=p->link;

        }while(p!=NULL);
   }
   getch();
}
void main( )
{	int ch;
	stack st;
	do{
   	heading();
		cout<<"MENU\n";
		cout<<"1.PUSH A NODE\n";
      cout<<"2.POP A NODE\n";
      cout<<"3.DISPLAY THE NODES\n";
      cout<<"4.EXIT";
		cout<<"\n\nSelect an option\n";
      cin>>ch;

      switch(ch)
      {
      	case 1:	st.push();break;
         case 2:  st.pop();break;
         case 3:  st.display();break;
      }
   }while(ch!=4);

}



