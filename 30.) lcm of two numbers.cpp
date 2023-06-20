//WAP to input three numbers and print all its combinations
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i;
	cout<<"Enter Two Numbers : ";
	cin>>a>>b;
	if (a<b)
	{
		c = a;
	}
	else
	{
		c = b;
	}
	
	for (i = c;i <= (a*b);i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			cout<<"LCM of "<<a<<" and "<<b<<" is "<<i<<endl;
			break;
		}
	}
	return 0;
}
