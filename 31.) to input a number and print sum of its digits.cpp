//WAP to input a number and print sum of its digit
#include<iostream>
using namespace std;
int main()
{
	int num,a,sum = 0,n;
	cout<<"Enter a Number : ";
	cin>>num;
	n =num;
	while(num > 0)
	{
		a = num % 10;
		num /= 10;
		sum += a;
	}
	cout<<"Sum of Digits of "<<n<<" is "<<sum;
	return 0;
}
