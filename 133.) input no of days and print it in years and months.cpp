//input number of days from a user and 
//print it in years, months and days
#include<iostream>
using namespace std;
int main()
{
	int num,a,b;
	cout<<"Enter Number of Days : ";
	cin>>num;
	a = num / 365;
	num %= 365;
	b = num / 30;
	num %= 30;
	cout<<a<<" years "<<b<<" months "<<num<<" days "<<endl;
}
