//to input an array of 10 numbers and swap its adjacent values
#include<iostream>
using namespace std;
int main()
{
	int num[10],a,temp;
	cout<<"Enter any 10 Numbers : ";
	for(a = 0;a<10;a++)
	{
		cin>>num[a];	
	}
	for (a = 0;a<10;a+=2)
	{
		temp = num[a+1];
		num[a+1] = num[a];
		num[a] = temp;
	}
	cout<<"Array after swapping : ";
	for(a = 0;a<10;a++)
	{
		cout<<num[a]<<"  ";
	}
	cout<<endl;
	return 0;
}
