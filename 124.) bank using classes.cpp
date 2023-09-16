#include<iostream>
using namespace std;
class Account
{
	private:
		char name[60];
		float bal;
		int acno;
	public:
		void input()
		{
			//cout<<"Inputing for Address "<<this<<endl;
			/*
			THIS pointer is an inbuilt pointer associated with
			every class which holds the address of current object
			i.e., object having '.' operator while 
			calling a member function.
			*/
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Account Number : ";
			cin>>acno;
			cout<<"Enter Initial Balance : ";
			cin>>bal;
		}
		void show()
		{
			cout<<"Accoutn Holder's Name is : "<<name<<endl;
			cout<<"Account Number : "<<acno<<endl;
			cout<<"Balancein the Account : "<<bal<<endl;
		}
};
int main()
{
	Account a,b;
	//cout<<"Address of a is : "<<&a<<endl;
	//cout<<"Address of b is : "<<&b<<endl;
	a.input();
	b.input();
	a.show();
	b.show();
	return 0;
}
