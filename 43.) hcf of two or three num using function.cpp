//WAF to find the HCF of two or three numbers
#include<iostream>
using namespace std;
int hcf(int a,int b);

int main()
{
	int a,b,c,ch,aa,ab;
	cout<<"Enter of how many numbers you want to find the HCF of (2/3) : ";
	cin>>ch;
	if (ch == 2)
	{
		cout<<"Enter two numbers : ";
		cin>>a>>b;
		aa = hcf(a,b);
		cout<<"HCF OF "<<a<<" & "<<b<<" IS "<<aa;
	}
	else if (ch == 3)
	{
		cout<<"Enter three numbers : ";
		cin>>a>>b>>c;
		aa = hcf(a,b);
		ab = hcf(aa,c);
		cout<<"HCF OF "<<a<<" & "<<b<<" & "<<c<<" IS "<<ab;
	}
	return 0;
}
int hcf(int a,int b)
{
	int res;
	while (a%b !=0)
	{
		res = a%b;
		a = b;
		b = res;
	}
	return res;
}
