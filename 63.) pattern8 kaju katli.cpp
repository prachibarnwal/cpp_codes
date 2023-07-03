/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
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
		for (j=i;j<=n-1;j++)
		{
			cout<<" ";
		}
		for(k = 1;k<=2*i-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	for (i=n-1;i >=1;i--)
	{
		for (j=i;j<=n-1;j++)
		{
			cout<<" ";
		}
		for(k = 1;k<=2*i-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
