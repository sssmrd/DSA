#include <iostream>

using namespace std;


//-----------------------LENGTH----------------------------
int stringlength(char s1[30])
{
	int len=0,i=0;

	while(s1[i]!='\0')
	{
    	len++;
    	i++;
	}
	return len;
	//cout<<"\n Length of"<<s1<<"is"<<len;
}
//----------------------------COPY---------------------------------
void copy(char s1[30])
{
	char s2[20];
	int i=0;

	do
	{
     	s2[i]=s1[i];
     	i++;
	}while(s2[i]!='\0');
	/*for(int i=0;s2[i]!='\0';i++)
            	s2[i]=s1[i];*/
   /* while(s1[i]!='\0')
	{
    	s2[i]=s1[i];
    	i++;
	}*/
	/*i++;
	s2[i]='\0';*/
	cout<<"\n Copied String:"<<s2;

}
//----------------------COMPARE--------------------------
void comp(char s1[30],char s2[30])
{
	int flag=0;
	int i=0;
	while(s1[i]!='\0')
	{
    	if(s1[i]!=s2[i])
    	{
        	flag=1;
        	break;
    	}
    	i++;
	}

	if(flag==0)
    	cout<<"\n Equal String";
	else
    	cout<<"\n Unequal String";
}
//-------------------------CONCAT-------------------
void concat(char s1[30],char s2[30])
{

	int i=0;
	int j=0;
	while(s1[i]!='\0')
    	i++;

	while(s2[j]!='\0')
	{
        	s1[i]=s2[j];
        	i++;
        	j++;
	}
	s1[i]='\0';
	cout<<"\n Concatenated string="<<s1;
}
//-------------------------REVERSE---------------------
void rev(char s1[30])
{
	int cnt=stringlength(s1);
	cout<<"\n Length="<<cnt;
	char s2[30];

	int ptr=0;
	cnt--;
	while(cnt>=0)
	{
    	//cout<<cnt<<"iteration";
    	s2[ptr]=s1[cnt];
    	ptr++;
    	cnt--;
	}

	cout<<"\n Reverse="<<s2;
}
int main() {
   	 char c;
   	 int c1;
   	 char s1[30],s2[30];
    do
    {
   	 cout<<"\n 1. Length";
   	 cout<<"\n 2. Copy";
   	 cout<<"\n 3. Compare";
   	 cout<<"\n 4. Concat";
   	 cout<<"\n 5. Reverse";
   	 cout<<"\n Enter your choice=";
   	 cin>>c1;
   	 switch(c1)
   	 {
   	 case 1:
   		 cout<<"\n Enter string=";
   		 cin>>s1;
   		 cout<<stringlength(s1);
   		 break;
   	 case 2:
   			 cout<<"\n Enter string=";
   			 cin>>s1;
   			 copy(s1);
   			 break;
   	 case 3:
   		 cout<<"\n Enter string1=";
   			 cin>>s1;
   			 cout<<"\n Enter string2=";
   			 cin>>s2;
   			 comp(s1,s2);
   			 break;
   	 case 4:
   				 cout<<"\n Enter string1=";
   					 cin>>s1;
   					 cout<<"\n Enter string2=";
   					 cin>>s2;
   					 concat(s1,s2);
   					 break;
    	case 5:
            	cout<<"\n Enter string1=";
   					 cin>>s1;
            	rev(s1);
            	break;
   	 default:    cout<<"\n Invalid option!!";


   	 }
   	 cout<<"\n Do you want to continue=(y/n)";
   					 cin>>c;
    }while(c!='n');
    return 0;
}


