//deleting an element from an array
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Size of Array : ";
	cin>>n;
	int arr[n],i,num,pos;
	char ans;
	cout<<"Enter Array Elements : ";
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	do
	{
		if(n==0)
		{
			cout<<"Array is Empty.....Deletion Not Possible"<<endl;
			break;
		}
		while (1)
		{
			cout<<"Enter the Number to be Deleted : ";
			cin>>num;
			int cnt = 0;
			for (i=0;i<n;i++)
			{
				if (num == arr[i])
				{
					pos = i;
					cnt++;
					break;
				}
			}
			if (cnt == 0)
			{
				cout<<num<<" is Not Present in the Array"<<endl;
				cout<<"Enter number which is present in Array!!"<<endl;
			}
			else
				break;
		}
		for(i=pos;i<n-1;i++)
		{
			arr[i] = arr[i+1];
		}
		n--;
		cout<<"Array After Deletion is : ";
		for (i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl<<"Do you want to Delete Again (y/n) : ";
		cin>>ans;
	}while (ans == 'y' || ans == 'Y');
	return 0;
}
