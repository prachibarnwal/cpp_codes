/*
5
54
543
5432
54321
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter Number of Rows : ";
	cin>>n;
	for (i=n;i>0;i--)
	{
		for (j = n; j>i-1;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
}
