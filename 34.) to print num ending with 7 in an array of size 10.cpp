//to input an array of size 10 and printing numbers ending with 7
#include<iostream>
using namespace std;
int main()
{
	int num[10],a;
	cout<<"Enter any 10 Numbers : ";
	for(a = 0;a<10;a++)
	{
		cin>>num[a];
		
	}
	for (a = 0;a<10;a++)
	{
		if(num[a] % 10 == 7)
		{
			cout<<num[a]<<" ";
		}
	}
	return 0;
}
