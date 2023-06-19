//fibonacci series
#include<iostream>
using namespace std;
int main()
{
	int num,i,a,b,temp;
	cout<<"Enter The Number of Elements You Want in Fibonacci Series : ";
	cin>>num;
	a = 0;
	b = 1;
	cout<<a<<endl;
	cout<<b<<endl;
	for (i=0;i<num - 2;i++)
	{
		cout<<a+b<<endl;
		temp = a;
		a = b;
		b = temp + b;
	}
	return 0;
}
