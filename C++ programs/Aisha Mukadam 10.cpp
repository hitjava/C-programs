#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void heading()
{
	clrscr();
	cout<<"\t\t\t\t10.Linklist-Queue \n";
   cout<<"\t\t\t\t_________________\n\n\n";
}
struct NODE
{	char name[30];
   int no;
   NODE *link;
};
class queue
{	NODE *front,*rear;
	public:
   queue( )
   {	front=rear=NULL; }
   void insertion( );
   void deletion( );
   void display( );
};
void queue:: insertion( )
{  heading( );
	cout<<"Node Insertion\n\n";
	NODE *p=new NODE;
	if(p==NULL)
   	cout<<"Error 912: Allocation Error";
   else
   {  cout<<"Enter the number:";
   	cin>>p->no;
   	cout<<"Enter the name:";
      gets(p->name);
      cout<<"\n Node added succesfully.";
      p->link=NULL;
      if(front==NULL && rear==NULL)
      	front=p;
      else
      	rear->link=p;
      rear=p;
   }
   getch( );
}
void queue:: deletion( )
{	heading();
   cout<<"Node Deletion\n\n";
	if(front==NULL && rear==NULL)
		cout<<"Error 771: Underflow Error";
	else
   {  cout<<"Node : \n";
		cout<<"Number\t";
      cout<<"Name\t";
      cout<<"Address\n";
      cout<<front->no<<'\t';
      cout<<front->name<<'\t';
      cout<<front<<'\n';
		cout<<"\n Node deleted succesfully.";
		NODE *temp = front;
      front=front->link;
      delete temp;
		if (front==NULL)
      	rear=NULL;
   }
}
void queue:: display( )
{  heading();
   cout<<"Node Display\n\n";
	NODE*p=front;
	if(p==NULL)
   	cout<<"Error 619:List is Empty";
   else
   {	printf("%-10s  ","ADDRESS");
      printf("%2s  ","NO");
      printf("%-20s  ","NAME");
      printf("%-10s\n","LINK");
      do
      {	cout<<p;
      	printf("%4i  ",p->no);
      	printf("%-20s  ",p->name);
      	cout<<p->link;
      	cout<<"\n";
      	p=p->link;
      }while(p!=NULL);
   }
}
void main( )
{	int ch;
	queue st;
   do
   {	clrscr( );
		heading( );
      cout<<"\t\tMENU\n";
      cout<<"\t\t____\n";
      cout<<"\t\t 1.INSERT A NODE\n";
      cout<<"\t\t 2.DELETE A NODE\n";
      cout<<"\t\t 3.DISPLAY THE NODES\n";
      cout<<"\t\t 4.EXIT\n";
      cout<<"Enter your choice:";
      cin>>ch;
      switch(ch)
      {	case 1: st.insertion( );
                 break;
      	case 2: st.deletion( );
                 break;
         case 3: st.display( );
                 break;
      }
      getch( );
   }while(ch!=4);
   getch( );
}



