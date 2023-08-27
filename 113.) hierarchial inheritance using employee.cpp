#include<iostream>
using namespace std;
class Employee
{
	protected:
		int empid;
		char name[50];
		long int sal;
	public:
		void input()
		{
			cout<<"Enter Employee ID : ";
			cin>>empid;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Salary : ";
			cin>>sal;
		}
		void show()
		{
			cout<<"Employee's ID : "<<empid<<endl;
			cout<<"Employee's Name : "<<name<<endl;
			cout<<"Employee's Salary : "<<sal<<endl;
		}
	
};
class Salesman:public Employee
{
	private:
		int ms,comm,tot;
	public:
		void input()
		{
			Employee::input();
			cout<<"Enter Monthly Sales : ";
			cin>>ms;
		}
		void show()
		{
			Employee::show();
			cout<<"Monthly Sales : "<<ms<<endl;
		}
		void totsal()
		{
			comm = ms/10;
			tot = sal + comm;
			cout<<"Commission is : "<<comm<<endl;
			cout<<"Total Salary : "<<tot<<endl;
		}
};
class Worker:public Employee
{
	private:
		int oth,wage,tot;
	public:
		void input()
		{
			Employee::input();
			cout<<"Enter Over-time Hours : ";
			cin>>oth;
		}
		void show()
		{
			Employee::show();
			cout<<"Over-time Hours : "<<oth<<endl;
		}
		void totsal()
		{
			wage = oth * 500;
			tot = sal + wage;
			cout<<"Worker's Wage : "<<wage<<endl;
			cout<<"Total Salary : "<<tot<<endl;
		}
};
class Manager:public Employee
{
	private:
		int shares;
	public:
		void input()
		{
			Employee::input();
			cout<<"Enter Manager's Shares : ";
			cin>>shares;
		}
		void show()
		{
			Employee::show();
			cout<<"Manager's Share : "<<shares<<endl;
		}
};
int main()
{
	int c,cc;
	Salesman s;
	Worker w;
	Manager m;
	do
	{
		cout<<"*******************************************"<<endl;
		cout<<"Press 1 : for Entry of a New Salesman"<<endl;
		cout<<"Press 2 : for Entry of a New Worker"<<endl;
		cout<<"Press 3 : for Entry of a New Manager "<<endl;
		cout<<"Press 4 : to Exit"<<endl;
		cout<<"*******************************************"<<endl;
		cout<<"Your Choice : ";
		cin>>c;
		if(c==1)
		{
			do
			{
				cout<<"----------------------------------"<<endl;
				cout<<"Press 1 : to Add an Employee"<<endl;
				cout<<"Press 2 : to Show All Details"<<endl;
				cout<<"Press 3 : to Show Total Salary"<<endl;
				cout<<"Press 4 : to Go to the Main Menu"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"Your Choice : ";
				cin>>cc;
				if(cc==1)
				{
					cout<<"*******************************************"<<endl;
					s.input();
					cout<<"*******************************************"<<endl;
				}
				else if(cc==2)
				{
					cout<<"*******************************************"<<endl;
					s.show();
					cout<<"*******************************************"<<endl;
				}
				else if(cc==3)
				{
					cout<<"*******************************************"<<endl;
					s.totsal();
					cout<<"*******************************************"<<endl;
				}
			}while(cc!=4);
		}
		else if(c==2)
		{
			do
			{
				cout<<"----------------------------------"<<endl;
				cout<<"Press 1 : to Add an Employee"<<endl;
				cout<<"Press 2 : to Show All Details"<<endl;
				cout<<"Press 3 : to Show Total Salary"<<endl;
				cout<<"Press 4 : to Go to the Main Menu"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"Your Choice : ";
				cin>>cc;
				if(cc==1)
				{
					cout<<"*******************************************"<<endl;
					w.input();
					cout<<"*******************************************"<<endl;
				}
				else if(cc==2)
				{
					cout<<"*******************************************"<<endl;
					w.show();
					cout<<"*******************************************"<<endl;
				}
				else if(cc==3)
				{
					cout<<"*******************************************"<<endl;
					w.totsal();
					cout<<"*******************************************"<<endl;
				}
			}while(cc!=4);
		}
		else if(c==3)
		{
			do
			{
				cout<<"----------------------------------"<<endl;
				cout<<"Press 1 : to Add an Employee"<<endl;
				cout<<"Press 2 : to Show All Details"<<endl;
				cout<<"Press 3 : to Go to the Main Menu"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"Your Choice : ";
				cin>>cc;
				if(cc==1)
				{
					cout<<"*******************************************"<<endl;
					m.input();
					cout<<"*******************************************"<<endl;
				}
				else if(cc==2)
				{
					cout<<"*******************************************"<<endl;
					m.show();
					cout<<"*******************************************"<<endl;
				}
			}while(cc!=3);
		}
	}while(c!=4);
	return 0;
}
