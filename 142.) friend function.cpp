//friend function can not be called with a '.' operator
//friend function should be declared in the class
//friend function are made outside the class

#include<iostream>
using namespace std;
class Department; //forward declaration
class Employee
{
	int empid;
	char name[40];
	char job[40];
	int deptid;
	public:
		void input()
		{
			cout<<"Enter EmpId, Name, Job and DeptId : ";
			cin>>empid>>name>>job>>deptid;
		}
		friend void check(Employee e, Department d);
};

class Department
{
	int deptid;
	char dname[40];
	public:
		void input()
		{
			cout<<"Enter Department Id and Name : ";
			cin>>deptid>>dname;
		}
		friend void check(Employee e, Department d);

};

void check(Employee e, Department d)
{
	if(e.deptid == d.deptid)
	cout<<e.name<<" works in "<<d.dname<<endl; 
}

int main()
{
	Employee e[5];
	Department d[2];
	for(int i = 0;i<5;i++)
		e[i].input();
	for(int i = 0; i<2; i++)
		d[i].input();
	for(int i = 0;i<5; i++)
	{
		check(e[i], d[0]);
		check(e[i], d[1]);		
	}
	return 0;
}
