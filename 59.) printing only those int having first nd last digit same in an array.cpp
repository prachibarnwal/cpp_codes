/*
Write a program to recieve an array of integers. 
Print only those which have their first and last digit same
*/
#include<iostream>
using namespace std;
int lastrem(int num);
int main()
{
	int ch,i,res,rem;
	cout<<"Enter Size of The Array : ";
	cin>>ch;
	int arr[ch];
	cout<<"Enter Array Elements : ";
	for (i = 0;i<ch;i++)
	{
		cin>>arr[i];
	}
	cout<<"Number having first and last digit same are : ";
	for (i=0;i<ch;i++)
	{
		res = lastrem(arr[i]);
		rem = arr[i] % 10;
		if (res == rem)
		{
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}
int lastrem(int num)
{
	int rem;
	while (num>0)
	{
		rem = num % 10;
		num /= 10;
	}
	return rem;
}

