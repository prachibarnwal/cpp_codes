//HCF & LCM OF THREE NUMBERS
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,rem,rem2,num1,num2,num3,low;
	cout<<"Enter First Number : ";
	cin>>num1;
	cout<<"Enter Second Number : ";
	cin>>num2;
	cout<<"Enter Third Number : ";
	cin>>num3;
	a = num1;
	b = num2;
	c = num3;
	//code for hcf of 1st and 2nd number
	while(num1 % num2 != 0)
	{
		rem = num1 % num2;
		num1 = num2;
		num2 = rem;
	}
	//code for final hcf of three numbers
	while(rem % num3 != 0)
	{
		rem2 = rem % num3;
		rem = num3;
		num3 = rem2;
	}
	//code for lcm
	if ( a < b && a < c)
	{
		low = a;
	}
	else if ( b < a && b < c)
	{
		low = b;
	}
	else
	{
		low = c;
	}
	for (d = low; d <= (a*b*c);d++)
	{
		if (d % a == 0 && d % b == 0 && d % c == 0)
		{
			cout<<"LCM OF "<<a<<" & "<<b<<" & "<<c<<" IS "<<d<<endl;
			break;
		}
	}
	cout<<"HCF OF "<<a<<" & "<<b<<" & "<<c<<" IS "<<rem2<<endl;
	return 0;
}
