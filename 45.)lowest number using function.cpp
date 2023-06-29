//WAF to input an array of integers and output the lowest number
#include<iostream>
using namespace std;
int min(int arr[],int n);
int main()
{
	int n,arr[25],a,res;
	cout<<"Enter size of the array (1-25): ";
	cin>>n;
	cout<<"Enter Array Elements : ";
	for(a=0;a<n;a++)
	{
		cin>>arr[a];
	}
	res = min(arr,n);
	cout<<"LOWEST NUMBER IN THE ARRAY IS : "<<res;
	return 0;
}
int min(int arr[],int n)
{
	int i,l=arr[0];
	for(i=0;i<n;i++)
	{
		if (arr[i]<l)
		{
			l = arr[i];
		}
	}
	return l;
}
