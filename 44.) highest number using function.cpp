//WAF to input an array of integers and output the highest number
#include<iostream>
using namespace std;
int max(int arr[],int n);
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
	res = max(arr,n);
	cout<<"HIGHEST NUMBER IN THE ARRAY IS : "<<res;
	return 0;
}
int max(int arr[],int n)
{
	int i,h=0;
	for(i=0;i<n;i++)
	{
		if (arr[i]>h)
		{
			h = arr[i];
		}
	}
	return h;
}
