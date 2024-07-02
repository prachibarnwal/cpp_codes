#include<iostream>
using namespace std;
int secondLargest(int arr[], int n);
int main()
{
	int n;
	cout<<"Enter Size of the Array : ";
	cin>>n;
	int *arr = new int[n];
	
	cout<<"Enter Array Elements : ";
	for(int i = 0;i<n;i++)
	cin>>arr[i];
	
	int sl;
	sl = secondLargest(arr,n);
	cout<<"Second Largest Element is the Array : "<<sl<<endl;
	
	return 0;
}
int secondLargest(int arr[], int n)
{
	int m, x;
	m = x = 0;
	for(int i = 0;i<n;i++)
	{
		if(arr[i] > m)
		m = arr[i];
	}
	for(int i = 0;i<n;i++)
	{
		if(arr[i] != m)
		{
			if(arr[i] > x)
			x = arr[i];
		}
	}
	return x;
}
