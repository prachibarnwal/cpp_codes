//table of a num using function
#include<iostream>
using namespace std;
void table(int);
int main()
{
	int num;
	cout<<"Enter a Number : ";
	cin>>num;
	table(num);
	return 0;
}
void table(int n)
{
	int i;
	for (i=1;i<=10;i++)
	{
		cout<<n<<" X "<<i<<" = "<<n*i<<endl;
	}
}
