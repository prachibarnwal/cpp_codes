//to input a number and print all even number before that number
#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter a Number : ";
	cin>>num;
	for (i = 0; i<= num; i += 2)
	{
		cout<<i<<endl;
	}
	return 0;
}
