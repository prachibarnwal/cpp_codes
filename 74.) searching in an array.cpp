//searching of elements in an array.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the Array : ";
	cin>>n;
	int arr[n],i;
	cout<<"Enter Array Elements : ";
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int num,cnt = 0;
	cout<<"enter the Number to be Searched : ";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if (arr[i] == num)
		cout<<num<<" Found at position : "<<i+1<<endl;
		else
		cnt++;
	}
	if(cnt>0)
	cout<<num<<" Not Found "<<endl;
	return 0;
}
