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
			cout<<"Balance in the Account : "<<bal<<endl;
		}
		void withdraw(int amt)
		{
			if(amt<= bal)
			{
				bal -= amt;
				cout<<"Withdrawl Successful !!"<<endl;
			}
			else
				cout<<"Insufficient Balance"<<endl;
		}
		void deposit(int amt)
		{
			bal += amt;
			cout<<"Amount Deposited"<<endl;
		}
};
int main()
{
	Account a;
	a.input();
	a.show();
	int ch,amount;
	while(1){
	cout<<"Press 1 : withdraw ; Press 2 : deposit"<<endl;
	cin>>ch;
	if(ch==1)
	{
		cout<<"Enter the Amount to be Withdrawn : ";
		cin>>amount;
		a.withdraw(amount);
		a.show();
	}
	else if(ch==2)
	{
		cout<<"Enter Amount to be Deposited : ";
		cin>>amount;
		a.deposit(amount);
		a.show();
	}
	else{
		cout<<"Invalid Choice"<<endl;
		break;}
	}
	return 0;
}
