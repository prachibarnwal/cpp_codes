//factorial of a number
#include<iostream>
using namespace std;
int main()
{
	int num,i,fac;
	cout<<"Enter a Number : ";
	cin>>num;
	fac = 1;
	for (i=num;i>0;i--)
	{
		fac = fac*i;
	}
	cout<<"Factorial of "<<num<<" is "<<fac<<endl;
	return 0;
}
