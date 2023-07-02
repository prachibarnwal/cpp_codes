#include<iostream>
using namespace std;
int main()
{
	int size,k;
	cout<<"Enter Size of the Array : ";
	cin>>size;
	int arr[size], i,j,sum,avg,cnt;
	cout<<"Enter Array of "<<size<<" Elements : ";
	for (i = 0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value for K : ";
	cin>>k;
	for(i = k;i<(size - k);i++)
	{
		sum = 0;
		for (j = i-k;j<=i+k;j++)
		{
			sum += arr[j];
		}
		cnt = 2 * k + 1;
		avg = sum/cnt;
		arr[i] = avg;
	}
	for (i = 0; i<k;i++)
	{
		arr[i] = -1;
	}
	
	for(i = size - k;i<size;i++)
	{
		arr[i] = -1;
	}
	cout<<"MODIFIED ARRAY : ";
	for (i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

