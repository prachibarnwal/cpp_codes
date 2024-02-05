#include<iostream>
using namespace std;

class Student
{
	int admno;
	char name[20];
	float marks;
	public:
		friend istream& operator >>(istream &x, Student &y);
		friend ostream& operator <<(ostream &x, Student &y);
};

int main()
{
	Student a, b;
	cin>>a>>b;
	cout<<a<<b;
	return 0;
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
