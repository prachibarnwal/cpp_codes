/*
define a class matrix having rows & col.
define function to input(), show(), transpose(),
show diagonals only, to find sum of each 
row separately  */
#include<iostream>
using namespace std;
class Matrix
{
	int a[20][20];
	int r,c,i,j,cnt;
	public:
		void input();
		void show();
		void transpose();
		void diagonals();
		void sum();	
};

int main()
{
	int ch;
	Matrix m;
	do
	{
		cout<<"Enter 1 - Input Matrix"<<endl;
		cout<<"Enter 2 - Show Matrix"<<endl;
		cout<<"Enter 3 - Show Transpose"<<endl;
		cout<<"Enter 4 - Show Diagonals Elements"<<endl;
		cout<<"Enter 5 - Sum of Each Row"<<endl;
		cout<<"Enter 6 - Stop Execution"<<endl;
		cout<<"Your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				m.input();
				break;
			case 2:
				m.show();
				break;
			case 3:
				m.transpose();
				break;
			case 4:
				m.diagonals();
				break;
			case 5:
				m.sum();
				break;
		}
	}while(ch!=6);
	return 0;
}
void Matrix::sum()
{
	cout<<"Sum of Elements of Each Row : "<<endl;
	for(i=0;i<r;i++)
	{
		cnt = 0;
		for(j=0;j<c;j++)
			cnt += a[i][j];
		cout<<"Sum of Row "<<i+1<<" : "<<cnt<<endl;
	}
	cout<<endl;
}
void Matrix::diagonals()
{
	cout<<"Diagonal Elements of Matrix : "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				cout<<a[i][j]<<"\t";
			}
			else
				cout<<"0"<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
void Matrix::transpose()
{
	cout<<"Transpose of Matrix is : "<<endl;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			cout<<a[j][i]<<"\t";
		cout<<endl;
	}
	cout<<endl;
}
void Matrix::input()
{
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
	cout<<"\nMatrix Elements Are : "<<endl;
	for(i =0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
	cout<<endl;
}
