/*
program to check whether a person is retired or not 
also if he/she is not retired then calculate and print 
the remaining years for his/her retirement.
*/
#include<iostream>
using namespace std;
int main()
{
	int age;
	char gender, name[30];
	cout<<"Enter Name of the Person : ";
	cin>>name;
	cout<<"Enter Gender(M/F) : ";
	cin>> gender;
	cout<<"Enter Age of the Person : ";
	cin>>age;
	if (gender == 'M')
	{
		if (age >= 60)
		cout<<name<<" is Retired"<<endl;
		else
		cout<<name<<" is Not Retired"<<endl;
		cout<<60 - age<<" years left for your Retirement"<<endl;
	}
	else if (gender == 'F')
	{
		if (age >= 58)
		cout<<name<<" is Retired"<<endl;
		else
		cout<<name<<" is not Retired"<<endl;
		cout<<58 - age<<" years left for your Retirement"<<endl;
	}
	else
	cout<<"Invalid Gender  >_<"<<endl;
	return 0;
}

