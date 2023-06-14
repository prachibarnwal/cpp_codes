//WAP to check if a number is even or odd using if.
#include<iostream>
using namespace std;
int main()
{
	int num,mod;
	cout<<"Enter the Number to be Checked : ";
	cin>>num;
	if (num % 2 == 0)
		cout<<"It's an Even Number."<<endl;
	else
		cout<<"It's an Odd Number."<<endl;
	return 0;
}
