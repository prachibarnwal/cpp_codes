/*
1        1
12      21
123    321
1234  4321
1234554321
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"Enter Number of Rows : ";
	cin>>n;
	
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
