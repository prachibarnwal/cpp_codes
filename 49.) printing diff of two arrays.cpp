/*
WAF to receive two integer arrays of same size.
print an array which contains the absolute 
difference between the corresponding values.
*/
#include<iostream>
using namespace std;
void diff(int arr[30], int arr1[30]);
int n;
int main()
{
	int arr[30],arr1[30],arrn[30],i;
	cout<<"Enter Size of the Array : ";
	cin>>n;
	cout<<"Enter Elements of First Array (1-30) : ";
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter Elements of Second Array (1-30) : ";
	for (i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	diff(arr, arr1);
	return 0;
}

void diff(int arr[30], int arr1[30])
{
	int arrn[30],i;
	cout<<"Difference of Corresponding Elements of the Entered Arrays : ";
	for (i=0;i<n;i++)
	{
		if (arr[i] > arr1[i])
		{
			arrn[i] = arr[i] - arr1[i];
			cout<<arrn[i]<<" ";
		}
		else
		{
			arrn[i] = arr1[i] - arr[i];
			cout<<arrn[i]<<" ";
		}
	}
}
