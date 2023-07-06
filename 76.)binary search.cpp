//binary search
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Array's Size : ";
	cin>>n;
	int arr[n],beg = 0,end = n-1,mid,i,num;
	cout<<"Enter Array Elements : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter Number to be Searched : ";
	cin>>num;
	while(beg<=end)
	{
		mid = (beg+end)/2;
		if(arr[mid] ==num)
		{
			cout<<"Found at Position : "<<mid+1<<endl;
			break;
		}
		else if(num>arr[mid])
		{
			beg = mid+1; //discarding the first half
		}
		else if(num<arr[mid])
		{
			end = mid-1;//discarding the second half
		}
	}
	if (beg>end)
	{
		cout<<num<<" not Found";
	}
	
	return 0;
}
