/*
WAP to input a number and print sum of all numbers 
divisible by 5 from 1 to that number
*/
#include<iostream>
using namespace std;
int main()
{
	int num,i,sum;
	cout<<"Enter a Number : ";
	cin>>num;
	sum = 0;
	for (i = 5;i <= num; i += 5)
	{
		sum += i;
	}
	cout<<"Sum of Numbers from 1 to "<<num<<" Divisible by 5 is "<<sum<<endl;
	return 0;
}
