//to input a matrix and print its transpose
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter Number of Rows and Columns : ";
	cin>>r>>c;
	int arr[r][c],i,j,cnt;
	cout<<"Enter Matrix Elements : ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix Elements are : "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"Transpose of Matrix is : "<<endl;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<arr[j][i]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
