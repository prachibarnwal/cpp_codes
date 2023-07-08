//to input a matrix and print sum of it's rows elements
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter the Number of Rows and Columns : ";
	cin>>r>>c;
	int a[r][c],i,j,cnt;
	cout<<"Enter Matrix Elements : ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cin>>a[i][j];
	}
	cout<<"Array Elements are : "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
	for(i=0;i<r;i++)
	{
		cnt = 0;
		for(j=0;j<c;j++)
		{
			cnt += a[i][j];
		}
		cout<<"Sum of Elements of Row "<<i+1<<" : "<<cnt<<endl;
	}
	return 0;
}
