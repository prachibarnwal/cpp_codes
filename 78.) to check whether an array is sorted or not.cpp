// WAP to input an array and check
// whether it's sorted in ascending 
//order or in descending order or not sorted
#include<iostream>
using namespace std;
void check(int arr[],int n);
int main()
{
	int n;
	cout<<"Enter Size of the Array : ";
	cin>>n;
	int arr[n],i;
	cout<<"Enter Array Elements : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	check(arr,n);
	return 0;
}

void check(int arr[],int n)
{
	int i,j,temp,cnt = 0,cnt1 = 0;
	for (i=0;i<n-1;i++)
	{
		if (arr[i] < arr[i+1])
			{
				cnt++;
			}
		else
			break;
	}
	for (i=0;i<n;i++)
	{
		if(arr[i] > arr[i+1])
			{
				cnt1++;
			}
		else
			break;
	}
	if (cnt==n-1)
	{
		cout<<"Array is Sorted in Increasing Order"<<endl;
	}
	else if(cnt1==n-1)
	{
		cout<<"Array is Sorted in Decreasing Order"<<endl;
	}
	else
		cout<<"Array is not Sorted"<<endl;
}
