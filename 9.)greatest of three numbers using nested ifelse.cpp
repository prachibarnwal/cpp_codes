// program to find greatest of 3 numbers using nested if else
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter First Number : ";
	cin>>a;
	cout<<"Enter Second Number : ";
	cin>>b;
	cout<<"Enter Thrid Number : ";
	cin>>c;
	if (a > b)
	{
		if (a>c)
		cout<<a<<" is the Greatest Number"<<endl;
		else
		cout<<c<<" is the Greatest Number "<<endl;
	}
	else if (b > a)
	{
		if (b > c)
		cout<<b<<" is the Greatest Number"<<endl;
		else
		cout<<c<<" is the Greatest Number"<<endl;
	}
	
	return 0;
}
