//to input an array of n size having elements as 0 and 1 only.
// and to count the longest sequence of 1.
#include<iostream>
using namespace std;
int main()
{
	int ch;
	cout<<"Enter Size of the Array : ";
	cin>>ch;
	int arr[ch],max = 0,i,cnt = 0;
	cout<<"Enter Array Elements (0's or 1's) : ";
	for (i=0;i<ch;i++)
	{
		cin>>arr[i];
	}
	for (i=0;i<ch;i++)
	{
		if (arr[i] == 1)
		{
			cnt++;
		}
		else
		{
			if(cnt>max)
				max = cnt;
			cnt=0;
		}
	}
	if(cnt>max)
		max = cnt;
	cout<<"Longest Sequence of 1's : "<<max<<endl;	
	return 0;
}
