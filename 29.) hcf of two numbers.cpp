//HCF of two numbers using while loop
#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter Two Numbers : ";
	cin>>a>>b;
	while ( a % b != 0);
	{
		r = a % b;
		a = b;
		b = r;
	}
	cout<<"HCF is "<<r<<endl;
	return 0;
}
