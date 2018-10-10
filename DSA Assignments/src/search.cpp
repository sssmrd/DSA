#include <iostream.h>
#define max 10
//using namespace std;

class Search
{
	int a[max],n;
	public:

	void get()
	{
		cout<<"\n Enter no. of elements to enter=";
		cin>>n;

		for(int i=0;i<n;i++)
		{
			cout<<"\n Enter "<<(i+1)<<" element=";
			cin>>a[i];
		}
	}


	//--------------------------linear search---------------------------
	void ls()
	{
		int val,flag=0;
		cout<<"\n Enter value to be searched=";
		cin>>val;
		for(int i=0;i<n;i++)
		{
			if(a[i]==val)
			{
				cout<<val<<" found at "<<(i+1)<<" position";
				flag=1;
				break;
			}
		}

		if(flag==0)
			cout<<"\n "<<val<<" not present in array";
	}

	//----------------------binary search-----------------

	void bs()
	{
		int val,l=0,u=n-1,mid,flag=0;
		cout<<"\n Note:Array must be sorted";
		cout<<"\n Enter value to be searched=";
		cin>>val;

		while(u>=l)
		{
			mid=((l+u)/2);
			if(a[mid]==val)
			{
				cout<<"\n Element found at "<<(mid+1)<<" position";
				flag=1;
				break;
			}
			else if(val>a[mid])
			{
				l=mid+1;
			}
			else if( val<a[mid])
			{
				u=mid-1;
			}
		}

		if(flag==0)
			cout<<"\n "<<val<<" not present in array";

	}
};

//----------------main--------------------
int main()
{
	Search ob;
	int ch;
	do
	{
		cout<<"--------------------------MENU----------------";
		cout<<"\n 1. Linear Search \n 2. Binary Search \n 3. Exit";
		cout<<"\n Enter your choice=";
		cin>>ch;

		switch(ch)
		{
			case 1:
				ob.get();
				ob.ls();
				break;
			case 2:
				ob.get();
				ob.bs();
				break;
			case 3:
				return 0;
			default:
				cout<<"\n Invalid Choice!!";
		}
	}while(ch!=3);

}

