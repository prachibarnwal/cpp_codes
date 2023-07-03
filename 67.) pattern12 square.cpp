/*
**********
*        *
*        *
*        *
*        *
*        *
**********
*/
#include<iostream>
using namespace std;
int main()
{
	int l,b,i,j;
	cout<<"Enter The Number of Rows : ";
	cin>>b;
	cout<<"Enter The Number of Columns : ";
	cin>>l;
	for(i=1;i<=l;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	
	for(i=1;i<=b-2;i++)
	{
		cout<<"*";
		for (j=1;j<=l-2;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		cout<<endl;
	}
	for(i=1;i<=l;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	return 0;
}
