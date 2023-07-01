//to check whether a number is prime or not
#include<iostream>
using namespace std;
int main()
{
	int num,n = 0,i;
	cout<<"Enter a Number : ";
	cin>>num;
	for(i=2;i<num;i++)
	{
		if (num%i == 0)
		{
			n++;
			break;
		}
	}
	if (n==0)
	{
		cout<<num<<" is a Prime Number !! "<<endl<<endl;
	}
	else
	{
		cout<<num<<" is Not a Prime Number  "<<endl<<endl;
	}
	return 0;
}
