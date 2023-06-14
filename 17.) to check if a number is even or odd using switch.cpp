// WAP to check if a number is even or odd using switch.
#include<iostream>
using namespace std;
int main()
{
	int num,rem;
	cout<<"Enter a Number : ";
	cin>>num;
	rem = num % 2;
	switch(rem)
	{
		case 1:
			cout<<num<<" is an Odd Number"<<endl;
			break;
		case 0:
			cout<<num<<" is an Even Number"<<endl;
			break;
	}
	return 0;
}
