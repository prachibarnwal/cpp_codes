/*
12345
1234
123
12
1
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
		for (j = 1; j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
}
