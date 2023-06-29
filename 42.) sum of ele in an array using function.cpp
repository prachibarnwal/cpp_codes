//sum of elements in an array using function
#include<iostream>
using namespace std;

int sum(int arr[], int n);
int main()
{
	int arr[20],n,i,res;
	cout<<"Enter Size of the Array (1-20) : ";
	cin>>n;
	if (n<=20)
	{
	cout<<"Enter array elements : ";
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	res = sum(arr,n);
	cout<<"Sum of elements in the array is : "<<res<<endl;
	}
	else
	cout<<"Invalid size"<<endl;

	return 0;
}
int sum(int arr[],int n)
{
	int i,s=0;
	for (i=0;i<n;i++)
	{
		s += arr[i];
	}
	return s;
	
}
