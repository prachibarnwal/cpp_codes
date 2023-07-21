//to compare two strings and check whether they are same or not
#include<iostream>
using namespace std;
int main()
{
	char name1[30],name2[30];
	int a,b,c,i;
	cout<<"Enter String 1 : ";
	cin>>name1;
	cout<<"Enter String 2 : ";
	cin>>name2;
	for(a=0;name1[a]!='\0';a++);
	for(b=0;name2[b]!='\0';b++);
	if(a==b)
	{
		for(i=0;i<a;i++)
		{
			if (name1[i] == name2[i])
			{
				c++;
				continue;
			}
			else 
			{
				cout<<"Strings are not Same !!"<<endl;
				break;
			}
		}
		if (c==b)
		{
			cout<<name1<<" & "<<name2<<" are Same "<<endl;
		}
	}
	else
		cout<<"Strings are not Same !!"<<endl;
	return 0;
}
