// program to check whether a year is leap or not
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the Year to be Checked : ";
	cin>>year;
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
		cout<<year<<" is a Leap Year"<<endl;
		else
		cout<<year<<" is not a Leap Year"<<endl;
	}
	else
	{
		if (year % 4 == 0)
		cout<<year<<" is a Leap Year"<<endl;
		else
		cout<<year<<" is not a Leap Year"<<endl;	
	}
	return 0;
}
