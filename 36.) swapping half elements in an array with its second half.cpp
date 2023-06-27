/*
WAP to input an array and interchange first 
half of the array with it's second half
*/
#include<iostream>
using namespace std;
int main()
{
	int num[10], a,temp;
	cout<<"Enter 10 Numbers : ";
	for(a = 0;a<10;a++)
	{
		cin>>num[a];
	}
	for(a = 0;a<5;a++)
	{
		temp = num[a];
		num[a] = num[a+5];
		num[a+5] = temp;
	}
	cout<<"Array After Swapping Half Elements : ";
	for(a = 0;a<10;a++)
	{
		cout<<num[a]<<" ";
	}
	return 0;
}
