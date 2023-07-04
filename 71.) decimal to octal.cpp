//decimal to octal converter
#include<iostream>
using namespace std;
int main()
{
	int num,nu,arr[30],i,k=0;
	cout<<"Enter a Number : ";
	cin>>num;
	nu=num;
	while (num >0)
	{
		arr[k++] = num % 8;
		num /= 8;
	}
	cout<<"Octal Equivalent of "<<nu<<" is ";
	for (i = k-1;i>=0;i--)
	{
		cout<<arr[i];
	}
	cout<<endl<<endl;
	return 0;
}
