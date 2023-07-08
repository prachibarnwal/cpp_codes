//to input a matrix and check whether its identity or not
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter Number of Rows and Columns : ";
	cin>>r>>c;
	if(r != c)
	{
		cout<<"Matrix having "<<r<<" rows and "<<c<<" columns can not be a SQUARE matrix"<<endl;
		cout<<"So, it's not an IDENTITY matrix as well "<<endl;
	}
	else
	{
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
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if (i == j && arr[i][j]==1)
				{
					cnt++;
				}
			}
		}
		if (cnt == r)
		{
			cout<<"Entered Matrix is an Identity Matrix "<<endl;
		}
		else
		{
			cout<<"It's Not an Identity Matrix"<<endl;
		}
	}
	return 0;
}
