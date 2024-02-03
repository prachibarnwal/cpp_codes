#include<iostream>
using namespace std;

class Teacher;
class Student
{
	int admno;
	char name[20];
	float marks;
	public:
		friend Teacher;
		friend istream& operator >>(istream &x, Student &y);
		friend ostream& operator <<(ostream &x, Student &y);
};
class Teacher
{
	int tid;
	char name[40], subject[50];
	public:
		friend Student;
		friend istream& operator >>(istream &x, Teacher &y);
		friend ostream& operator <<(ostream &x, Teacher &y);
		void show(Student x)
		{
			cout<<"Student Name is : "<<x.name<<endl;
		}	
		
};

int main()
{
	Student a;
	Teacher t;
	cin>>a;
	cin>>t;
	cout<<t;
	cout<<a;
	t.show(a);
	return 0;
}

istream& operator >>(istream &x, Teacher &y)
{
	cout<<"Enter Teacher I'd : ";
	cin>>y.tid;
	cout<<"Enter Name : ";
	cin>>y.name;
	cout<<"Enter Subject : ";
	cin>>y.subject;
	return x;
}
ostream& operator <<(ostream &x, Teacher &y)
{
	cout<<"Teacher I'd is : "<<y.tid<<endl;
	cout<<"Name is : "<<y.name<<endl;
	cout<<"Subject is : "<<y.subject<<endl;
	return x;
}
istream& operator >>(istream &x, Student &y)
{
	cout<<"Enter Admission Number : ";
	cin>>y.admno;
	cout<<"Enter Name : ";
	cin>>y.name;
	cout<<"Enter Marks : ";
	cin>>y.marks;
	return x;
}
ostream& operator <<(ostream &x, Student &y)
{
	cout<<"Admission Number is : "<<y.admno<<endl;
	cout<<"Name is : "<<y.name<<endl;
	cout<<"Marks is : "<<y.marks<<endl;
	return x;
}
