#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter Number of Rows and Columns : ";
	cin>>r>>c;
	int m[r][c],i,j;
	cout<<"Enter Matrix Elements : "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>m[i][j];
		}
	}
	cout<<"Entered Matrix is : "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<m[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
