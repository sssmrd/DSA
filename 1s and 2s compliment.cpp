#include<iostream>
#define max 10
using namespace std;

class NN
{
	struct node
	{
		//public:
		int bit;
		node *next,*prev;
	};
	public:
	//NN(){s=NULL;}
	
	int n;
		node *lsb,*msb;
		NN()
		{
			lsb=NULL;
			msb=NULL;
			n=0;
		}
		void get()
		{

			cout<<"\n How many bit data you want to enter=";
			cin>>n;
			
			for(int i=0;i<n;i++)
			{
						// lsb is acepted first to msb
				node *t=new node;
				cout<<"\n Enter "<<(i+1)<<" bit";
				cin>>t->bit;
				t->prev=NULL;
				t->next=NULL;
				if(lsb==NULL)
				{
					lsb=t;
					msb=t;
				}
				
				else
				{
					t->next=msb;
					msb->prev=t;
					msb=t;
					
				}
			}
		}
		//inline node getn(){ return }
		void dis()
		{
			if(lsb==NULL)
				cout<<"\n Number not present";
			else
			{
				node *cnt=msb;
				while(cnt!=NULL)
				{
					cout<<cnt->bit;
					cnt=cnt->next;
				}
				cout<<"\n";
			}
			
			
		}
		
		NN ones(NN o)
		{
			NN temp=o;	
			
			node *cn;
			cn=this->lsb;
			while(cn!=NULL)
			{
				if(cn->bit==0)
				{
					cn->bit=1;
				}
				else
				{
					cn->bit=0;
				}
				
				cn=cn->prev;

			}
					
							
							cout<<"\n 1's Compliment:";
							temp.dis();
							return temp;
		}
		
		void two(NN b)
		{
			int carry=1;
			node *cn=b.lsb;
			while(cn!=NULL)
			{
				if(cn->bit==1 && carry==1 )
				{
					cn->bit=-0;
					carry=1;
				}
				else if(cn->bit==0 && carry==1)
				{
					cn->bit=1;
					carry=0;
				}
				
				else if(cn->bit==1 && carry==0)
				{
					cn->bit=1;
					carry=0;
				}

				cn=cn->prev;
				
			}
			cout<<"\n 2's Compliment:";
			b.dis();
		}
		
};

int main()
{
	NN ob,b;
	ob.get();
	ob.dis();
	b=ob.ones(ob);
	ob.two(b);
}

