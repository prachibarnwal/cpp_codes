//WAP to input 10 numbers and print the highest and lowest among them
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n0,max,min;
	cout<<"Enter Any 10 Numbers : ";
	cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n0;
	min = n1;
	max = n1;
	if (n1 > max)
	{
		max = n1;
	}
	if (n2 > max)
	{
		max = n2;
	}
	if (n3 > max)
	{
		max = n3;
	}
	if (n4 > max)
	{
		max = n4;
	}
	if (n5 > max)
	{
		max = n5;
	}
	if (n6 > max)
	{
		max = n6;
	}
	if (n7 > max)
	{
		max = n7;
	}
	if (n8 > max)
	{
		max = n8;
	}
	if (n9 > max)
	{
		max = n9;
	}
	if (n0 > max)
	{
		max = n0;
	}
	cout<<"Highest Number : "<<max<<endl;
	if (n1 < min)
	{
		min = n1;
	}
	if (n2 < min)
	{
		min = n2;
	}
	if (n3 < min)
	{
		min = n3;
	}
	if (n4 < min)
	{
		min = n4;
	}
	if (n5 < min)
	{
		min = n5;
	}
	if (n6 < min)
	{
		min = n6;
	}
	if (n7 < min)
	{
		min = n7;
	}
	if (n8 < min)
	{
		min = n8;
	}
	if (n9 < min)
	{
		min = n9;
	}
	if (n0 < min)
	{
		min = n0;
	}
	cout<<"Lowest Number : "<<min<<endl;
	return 0;
}
