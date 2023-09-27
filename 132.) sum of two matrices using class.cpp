/*
to add two matrices using function in a class
c = a.add(b)
*/
#include<iostream>
using namespace std;
class Matrix
{
	int a[20][20];
	int r,c;
	public:
		void input();
		void show();
		Matrix add(Matrix);	
};

int main()
{
	int ch;
	Matrix a,b,c;
	a.input();
	b.input();
	a.show();
	b.show();
	c = a.add(b);
	c.show();
	return 0;
}
Matrix Matrix::add(Matrix t)
{
	Matrix sum;
	if( r == t.r && c == t.c)
	{
		sum.r= t.r;
		sum.c= t.c;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				sum.a[i][j] = a[i][j] + t.a[i][j];
		}
	}
	else
	{
		sum.r=0;
		sum.c= 0;
		cout<<"Size of Matrix is Not Equal"<<endl;
		cout<<"Addition Not Possible"<<endl;
	}
	return sum;
}
void Matrix::input()
{
	int i,j;
	cout<<"Enter Number of Rows and Columns : ";
	cin>>r>>c;
	a[r][c];
	cout<<"Enter Matrix Elements : ";
	for(i=0;i<r;i++)
	{
		for (j = 0;j<c;j++)
			cin>>a[i][j];
	}
	cout<<"Matrix Stored !!!"<<endl;
}
void Matrix::show()
{
	int i,j;
	cout<<"\nMatrix Elements Are : "<<endl;
	for(i =0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
	cout<<endl;
}
