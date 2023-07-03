/*
ABCCBA
AB  BA
A    A
A    A
AB  BA
ABCCBA
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"Enter Number of Rows : ";
	cin>>n;
	n/=2;
	for (i=n;i >=1;i--)
	{
		for (j=1;j<=i;j++)
		{
			cout<<char(64+j);
		}
		for (j=1;j<=2 * (n-i);j++)
		{
			cout<<" ";
		}
		for(k = i;k>=1;k--)
		{
			cout<<char(64+k);
		}
		cout<<endl;
	}
	for (i=1;i <=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			cout<<char(64+j);
		}
		for (j=1;j<=2 * (n-i);j++)
		{
			cout<<" ";
		}
		for(k = i;k>=1;k--)
		{
			cout<<char(64+k);
		}
		cout<<endl;
	}
	return 0;
}
