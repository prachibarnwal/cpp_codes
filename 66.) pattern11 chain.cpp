/*
*     *
 *   *
  * *
   *
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
		for (k=0;k <=i;k++)
		{
			cout<<" ";
		}
		cout<<"*";
		for (j=0;j<= 2 *(n-i);j++)
		{
			cout<<" ";
		}
		cout<<"*";
		cout<<endl;
	}
	for (k=0;k <=n+1;k++)
	{
		cout<<" ";
	}
	cout<<"*";
	cout<<endl;
	return 0;
}
