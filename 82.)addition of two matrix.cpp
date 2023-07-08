//to input two matrices and print sum of its corresponding elements 
#include<iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2;
	cout<<"Enter Number of Rows and Columns for the 1st Matrix : ";
	cin>>r1>>c1;
	cout<<"Enter Number of Rows and Columns for the 2nd Matrix : ";
	cin>>r2>>c2;
	if (r1==r2 && c1==c2)
	{
		int a[r1][c1],b[r2][c2],s[r1][c1],i,j;
		//input of 1st matrix
		cout<<"Enter Elements of Matrix 1 : ";
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				cin>>a[i][j];
		}
		//input of 2nd matrix
		cout<<"Enter Elements of Matrix 2 : ";
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
				cin>>b[i][j];
		}
		//printing 1st matrix
		cout<<"Elements of 1st Matrix are : "<<endl;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				cout<<a[i][j]<<"\t";
			cout<<"\n";
		}
		//printing 2nd matrix
		cout<<"Elements of 2nd Matrix are : "<<endl;
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
				cout<<b[i][j]<<"\t";
			cout<<"\n";
		}
		//calculating sum
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				s[i][j] = a[i][j]+b[i][j];
		}
		cout<<"Sum of 1st and 2nd Matrix are : "<<endl;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				cout<<s[i][j]<<"\t";
			cout<<"\n";
		}
	}
	else
	{
		cout<<"Addition Not Possible "<<endl;
		cout<<"Matrices are not of Same Size "<<endl;
	}
	return 0;
}
