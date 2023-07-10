#include<iostream>
using namespace std;
struct Date
{
	int day,month,year;
};
struct Student
{
	int rno;
	char name[50];
	int cls,marks;
	Date dob,doj; // Nesting of Structures
};
int main()
{
	int i,n;
	cout<<"Enter Number of Students : ";
	cin>>n;
	Student a[n];
	for(i = 0;i <n ; i++)
	{
		cout<<"Enter rollno for Student "<<i+1<<" : ";
		cin>>a[i].rno;
		cout<<"Enter name for Student "<<i+1<<" : ";
		cin>>a[i].name;
		cout<<"Enter Class for Student "<<i+1<<" : ";
		cin>>a[i].cls;
		cout<<"Enter Marks for Student "<<i+1<<" : ";
		cin>>a[i].marks;
		cout<<"Enter Date of Birth (day month year) : ";
		cin>>a[i].dob.day>>a[i].dob.month>>a[i].dob.year;
		cout<<"Enter Date of Joining (day month year) : ";
		cin>>a[i].doj.day>>a[i].doj.month>>a[i].doj.year;
	}
	for(i = 0;i <n ; i++)
	{
	cout<<"Student "<<i+1<<" : "<<endl;
	cout<<a[i].name<<" has scored "<<a[i].marks<<endl;
	cout<<"Date of Birth is "<<a[i].dob.day<<"-"<<a[i].dob.month<<"-"<<a[i].dob.year<<endl;
	cout<<"Date of Joining is "<<a[i].doj.day<<"-"<<a[i].doj.month<<"-"<<a[i].doj.year<<endl;
	}
}
