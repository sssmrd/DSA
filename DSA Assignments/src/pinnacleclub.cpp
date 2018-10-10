#include<iostream>
using namespace std;
class Student
{
	class node
	{
		public:
		int id;
		string name;
		node *next;


	}n;

	public:
			node *pn,*sn;
	int count1;
	void rev(node*);
	void create();
	void get();
	void dis();

	void count();

	Student()
	{
		count1=0;
	}



};

void Student::rev(node *cn)
{
	if(cn->next!=NULL)
		rev(cn->next);

	cout<<"\n Name:"<<cn->name;
	cout<<"\n id:"<<cn->id;
}

void Student::create()
{



	if(pn==NULL)
	{
	   cout<<"\n Enter president detail";
	   node *temp=new node;
	   cout<<"\n Enter name:";
	   cin>>temp->name;
	   //cout<<"\n Enter id:";
	   temp->id=1;
	   count1++;
	   pn=temp;
	   pn->next=NULL;

	   	   cout<<"\n Enter secratary detail";
	   	   node *sec=new node;
	   cout<<"\n Enter name:";
	   cin>>sec->name;
	   cout<<"\n Enter id:";
	   cin>>sec->id;
	   sn=sec;
	   sn->next=NULL;
	   count1++;
	   pn->next=sn;


	}
	else
	{
		int f=0;
		node *temp=new node;
		cout<<"\n Enter name:";
	    cin>>temp->name;
	    cout<<"\n Enter id:";
	    cin>>temp->id;
	   	node *cnt,*cnt1;
	   	cnt=pn;
	   	cnt1=cnt->next;
	   	while(cnt1!=NULL)
	   	{
	   		if(cnt1->id==temp->id)
	   		{
	   			cout<<"\n Repeated id!! Reinsert record";

	   			break;
	   		}
	   		else if(temp->id>cnt1->id)
	   		{
	   			cnt=cnt->next;
	   			cnt1=cnt1->next;
	   		}
	   		else
	   		{
	   			temp->next=cnt1;
	   			cnt->next=temp;
	   			count1++;
	   			break;
	   		}

	   	}
	}
}

void Student::dis()
{
	if(pn==NULL)
		cout<<"\n List empty";
	else
	{
		node *cnt;
	cnt=pn;
	while(cnt!=NULL)
	{
		cout<<"\n Name:"<<cnt->name;
		cout<<"\n id:"<<cnt->id;
		cnt=cnt->next;
	}
	}

}
inline void Student::count()
{
	cout<<"\n Total no. of nodes:"<<count1;
}


int main()
{
	Student s1;
	int ch;



	do
	{
		cout<<"\n-----------------------------	MENU----------------------------";
	   cout<<"\n 1.Insert \n 2.Display \n 3. Count \n 4.Reverse \n 5.Exit";
	   cout<<"\n Enter your choice=";
	   cin>>ch;

	   switch(ch)
	   {
	      case 1:
	         s1.create();
	         break;
	      case 2:
	         s1.dis();
	         break;
	      case 3:
	         s1.count();
	         break;
	       case 4:
	       	 s1.rev(s1.pn);
	      case 5:
	      	 return 0;
	      default:
	      	 cout<<"\n Invalid choice";
	   }
	}while(ch!=5);
}
