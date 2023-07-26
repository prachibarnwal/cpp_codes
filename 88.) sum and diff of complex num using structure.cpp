//WAP to input two complex num from user
//and to print their sum , product and difference
#include<iostream>
using namespace std;
struct complex
{
	int r,i;
};

int main()
{
	complex a,b;
	cout<<"Enter Real Part of First Complex Number : ";
	cin>>a.r;
	cout<<"Enter Imaginary Part of First Complex Number : ";
	cin>>a.i;
	cout<<"Enter Real Part of Second Complex Number : ";
	cin>>b.r;
	cout<<"Enter Imaginary Part of Second Complex Number : ";
	cin>>b.i;
	cout<<endl<<endl<<"Fisrt Complex Number : "<<a.r<<" + i"<<a.i<<endl;
	cout<<"Second Complex Number : "<<b.r<<" + i"<<b.i<<endl;
	
	//printing sum
	cout<<endl<<"Sum of "<<a.r<<" + i"<<a.i<<" & "<<b.r<<" + i"<<b.i<<" = "<<a.r+b.r<<" + i"<<a.i+b.i<<endl;
	//printing difference
	if ((a.i-b.i) < 0)
		cout<<endl<<"Difference of "<<a.r<<" + i"<<a.i<<" & "<<b.r<<" + i"<<b.i<<" = "<<a.r-b.r<<" - i"<<b.i-a.i<<endl;
	else
		cout<<endl<<"Difference of "<<a.r<<" + i"<<a.i<<" & "<<b.r<<" + i"<<b.i<<" = "<<a.r-b.r<<" - i"<<a.i-b.i<<endl;
	//printing product
	cout<<endl<<"Product of "<<a.r<<" + i"<<a.i<<" & "<<b.r<<" + i"<<b.i<<" = "<<(a.r*b.r) - (a.i*b.i)<<" + i"<<(a.r*b.i) + (a.i*b.r)<<endl;
	
	return 0;
}
