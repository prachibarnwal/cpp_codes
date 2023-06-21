/*
WAP to multiply two numbers and print their
product without using multiplication operator
*/
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,p = 0,i;
	cout<<"Enter Two Numbers to Multiply : ";
	cin>>n1>>n2;
	for (i = 0; i < n2; i++)
	{
		p += n1;
	}
	cout<<"Product of "<<n1<<" and "<<n2<<" is "<<p;
	return 0;
}
