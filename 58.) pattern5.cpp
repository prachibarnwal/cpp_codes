/*
1
01
101
0101
10101
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter Number of Rows : ";
	cin>>n;
	for (i=n;i>=1;i--)
	{
		for (j = i;j<=n;j++)
		{
			cout<<j%2<<" ";
		}
		cout<<endl;
	}
	
}
