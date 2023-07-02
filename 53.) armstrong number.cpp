//to check whether a number is armstrong or not
// number which is equal to sum of cubes of its digit
#include<iostream>
using namespace std;
int main()
{
	int num,n = 0,i,numm;
	cout<<"Enter a Number : ";
	cin>>num;
	numm = num;
	while (num > 0)
	{
		i = num % 10;
		cout<<i<<endl;
		n += i * i * i ;
		cout<<n<<endl;
		num /= 10;
	}
	if (n==numm)
	{
		cout<<numm<<" is an Armstrong Number !! "<<endl<<endl;
	}
	else
	{
		cout<<numm<<" is Not an Armstrong Number  "<<endl<<endl;
	}
	return 0;
}
