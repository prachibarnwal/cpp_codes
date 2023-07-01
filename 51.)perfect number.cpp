//to check whether a number is perfect or not
#include<iostream>
using namespace std;
int main()
{
	int num,n = 0,i;
	cout<<"Enter a Number : ";
	cin>>num;
	for(i=1;i<num;i++)
	{
		if (num%i == 0)
		{
			n += i;
		}
	}
	if (n==num)
	{
		cout<<num<<" is a Perfect Number !! "<<endl<<endl;
	}
	else
	{
		cout<<num<<" is Not a Perfect Number  "<<endl<<endl;
	}
	return 0;
}
