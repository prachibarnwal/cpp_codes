/*
54321
5432
543
54
5
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter Number of Rows : ";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for (j = n; j>=i; j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
}
