#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter teh Size of the Array : ";
	cin>>n;
	int *arr = new int[n];
	
	//array input
	cout<<"Enter Array Elements : ";
	for(int i = 0;i<n;i++)
		cin>>arr[i];
	
	//displaying original array
	cout<<"Entered Array ELements Are : \n";
	for(int i = 0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	//rotating by one;
	int temp = arr[n-1];
	for(int i = n-1; i>0;i--)
		arr[i] = arr[i-1];
	arr[0] = temp;
	
	//displaying the modified array
	cout<<"Array ELements after Rotating by 1 Are : \n";
	for(int i = 0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	return 0;
	
}
