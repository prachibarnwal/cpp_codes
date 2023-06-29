//to input an array and define a function to sort the array in increasing order
#include<iostream>
using namespace std;
void sort(int arr[],int n);
int main()
{
	int n,i,arr[30];
	cout<<"Enter the size of the array(1-30) : ";
	cin>>n;
	cout<<"Enter the numbers : ";
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,n);
	return 0;
}

void sort(int arr[],int n)
{
	int i,j,temp;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<"ARRAY ARRANGED IN ASCENDING ORDER : ";
	for (i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
