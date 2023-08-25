#include<iostream>
using namespace std;
class Bank
{
	protected:
		long int acno;
		char name[30];
		long int bal;
	public:
		void input()
		{
			cout<<"Enter Account Number : ";
			cin>>acno;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Initial Balance : ";
			cin>>bal;
		}
		void show()
		{
			cout<<"Account Number is : "<<acno<<endl;
			cout<<"Name is : "<<name<<endl;
			cout<<"Balance is : "<<bal<<endl;
		}
};
class Savings:public Bank
{
	public:
		void withdraw(int amt)
		{
			if (amt<bal){
				bal -= amt;
				cout<<"Amount Withdrawn Successfully"<<endl;
				cout<<"Remaining Balnce is : "<<bal<<endl;}
			else
				cout<<"Insufficient Balance in the Account "<<endl;
		}
		void deposit(int amt)
		{
			bal += amt;
			cout<<"Amount Deposited, Updated Balance is : "<<bal<<endl;
		}
};

class FD: public Bank
{
	float rate;
	int time;
	public:
		void input()
		{
			Bank::input();
			cout<<"Enter Rate of Interest : ";
			cin>>rate;
			cout<<"Enter Time : ";
			cin>>time;
		}
		void show()
		{
			Bank::show();
			cout<<"Rate of Interest : "<<rate<<endl;
			cout<<"Time : "<<time<<endl;
		}
		void showam()
		{
			float si, amt;
			si = bal * rate * time / 100;
			amt = bal + si;
			cout<<"Amount on Maturity is : "<<amt<<endl;
		}
};
int main()
{
	Savings a;
	FD A;
	int ch;
	do
	{
		cout<<"------------------------------------"<<endl;
		cout<<"Press 1 : to Create a New Account"<<endl;
		cout<<"Press 2 : to Show Account Details"<<endl;
		cout<<"Press 3 : to Withdraw Some Amount"<<endl;
		cout<<"Press 4 : to Deposit Some Amount"<<endl;
		cout<<"Press 5 : to Create a New FD"<<endl;
		cout<<"Press 6 : to Show All Details of FD"<<endl;
		cout<<"Press 7 : to Show FD's Amount"<<endl;
		cout<<"Press 8 : to Exit"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Your Choice : ";
		cin>>ch;
		if (ch==1)
		{
			cout<<"------------------------------------"<<endl;
			a.input();
			cout<<"------------------------------------"<<endl;
		}
		else if(ch==2)
		{
			cout<<"------------------------------------"<<endl;
			a.show();
			cout<<"------------------------------------"<<endl;
		}
		else if (ch==3)
		{
			cout<<"------------------------------------"<<endl;
			int amt;
			cout<<"Enter the Amount to be Withdrawn : ";
			cin>>amt;
			a.withdraw(amt);
			cout<<"------------------------------------"<<endl;
		}
		else if(ch==4)
		{
			cout<<"------------------------------------"<<endl;
			int amt;
			cout<<"Enter the Amount to be Deposited : ";
			cin>>amt;
			a.deposit(amt);
			cout<<"------------------------------------"<<endl;
		}
		else if(ch==5)
		{
			cout<<"------------------------------------"<<endl;
			A.input();
			cout<<"------------------------------------"<<endl;
		}
		else if(ch==6)
		{
			cout<<"------------------------------------"<<endl;
			A.show();
			cout<<"------------------------------------"<<endl;
		}
		else if(ch==7)
		{
			cout<<"------------------------------------"<<endl;
			A.showam();
		}
	}while(ch!=8);
	
	return 0;
}
