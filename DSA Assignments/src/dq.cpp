#include <iostream>
using namespace std;
#define max 5
class DQ
{
	int q[max],f,r;
	public:
		DQ()
		{
			f=-1;
			r=-1;
		}

		void insert_f(int);
		void insert_r(int val);
		void delete_f();
		void delete_r();
		void dis();
};
//-------------------------display-----------------------
void DQ::dis()
{
	for(int i=f;i<=r;i++)
	{
		cout<<"\n"<<q[i];
	}

}
//---------------------------insert front----------------------
void DQ::insert_f(int val)
{
	if((r+1)%max==f)
	{
		cout<<"\n Queue full";
	}
	else if(r==-1 && f==-1)
	{
		f=r=0;
		q[r]=val;
	}
	else
	{
		int i=r;
		while(i>=f)
		{
			q[i+1]=q[i];
			i--;
		}
		q[f]=val;
		r++;
	}

}
//-------------------------------insert rear-------------------

void DQ::insert_r(int val)
{
	if((r+1)%max==f)
	{
		cout<<"\n Queue full";
	}
	else if(r==-1 && f==-1)
	{
		f=r=0;
		q[r]=val;
	}
	else
	{
		r++;
		q[r]=val;
	}
}
//-------------------------------delete rear---------------------
void DQ::delete_r()
{
	if((f==-1 && r==-1) || r<f)
	{
		cout<<"\n Queue Underflow";
	}
	else
	{
		cout<<"\n Deleted element: "<<q[r];
		r--;
		if(r<f)
			r=f=-1;
	}
}

//------------------------------delete front--------------------------
void DQ::delete_f()
{
	if((f==-1 && r==-1) || f>r)
	{
		cout<<"\n Queue Underflow";
	}
	else
	{
		cout<<"\n Deleted element:"<<q[f];
		f++;
		if(f>r)
			f=r=-1;
	}
}
int main()
{
	char ch;
	int m,val;;
	DQ ob;

	do
	{
		cout<<"\n ---------------------------MENU-----------------";
		cout<<"\n 1. INSERT AT FRONT";
		cout<<"\n 2. INSERT AT REAR";
		cout<<"\n 3. DELETE AT FRONT";
		cout<<"\n 4. DELETE AT REAR";
	    cout<<"\n Enter your choice:";
	    cin>>m;

	    switch(m)
	    {
	    	case 1:
	    		cout<<"\n Enter value:";
	    		cin>>val;
	    		ob.insert_f(val);
	    		ob.dis();
	    		break;
	    	case 2:
	    		cout<<"\n Enter value:";
	    		cin>>val;
	    		ob.insert_r(val);
	    		ob.dis();
	    		break;
	    	case 3:
	    		ob.delete_f();
	    		ob.dis();
	    		break;
	    	case 4:
	    		ob.delete_r();
	    		ob.dis();
	    		break;
	    	default:
	    		cout<<"\n Invalid choice!!";


	    }
	    cout<<"\n Do you want to continue:";
	    cin>>ch;
	}while(ch!='n');
}

