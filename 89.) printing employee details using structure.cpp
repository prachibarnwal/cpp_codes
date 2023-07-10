#include<iostream>
using namespace std;

struct Date
{
	int day,mon,year;
};
struct Add
{
	int str_no;
	char city[50],country[20];
	int pincode;
};
struct Employee
{
	int empid;
	char name[60];
	int salary;
	Date dob,doj;
	Add address;
	
};
int main()
{
	int i,n,max = 0,num;
	cout<<"Enter Number of Employees to Add : ";
	cin>>n;
	Employee a[n]; 
	for(i=0;i<n;i++)
	{
		cout<<"Enter Id of Employee "<<i+1<<" : ";
		cin>>a[i].empid;
		cout<<"Enter Name of Employee "<<i+1<<" : ";
		cin>>a[i].name;
		cout<<"Enter Salary of Employee "<<i+1<<" : ";
		cin>>a[i].salary;
		cout<<"Enter Address of Employee "<<i+1<<" : "<<endl;
		cout<<"Street Number : ";
		cin>>a[i].address.str_no;
		cout<<"City Name : ";
		cin>>a[i].address.city;
		cout<<"Country : ";
		cin>>a[i].address.country;
		cout<<"Pincode (XXXXXX) : ";
		cin>>a[i].address.pincode;
		cout<<"Enter Date of Birth (day month year) : ";
		cin>>a[i].dob.day>>a[i].dob.mon>>a[i].dob.year;
		cout<<"Enter Date of Joining (day month year) : ";
		cin>>a[i].doj.day>>a[i].doj.mon>>a[i].doj.year;
	}
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\tEMPLOYEE DETAILS"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"emp id \t emp name \t salary \t address \t dob \t doj \t"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i].empid<<"\t"<<a[i].name<<"\t"<<a[i].salary<<"\t"<<a[i].address.str_no<<","<<a[i].address.city<<"\t"<<a[i].dob.day<<"-"<<a[i].dob.mon<<"-"<<a[i].dob.year<<"\t"<<a[i].doj.day<<"-"<<a[i].doj.mon<<"-"<<a[i].doj.year<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		if (a[i].salary > max)
		{
			max = a[i].salary;
			num = i;
		}
	}
	cout<<endl<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"\t details of employee having maximum salary : "<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	
	cout<<a[num].empid<<"\t"<<a[num].name<<"\t"<<a[num].salary<<"\t"<<a[num].address.str_no<<","<<a[num].address.city<<"\t"<<a[num].dob.day<<"-"<<a[num].dob.mon<<"-"<<a[num].dob.year<<"\t"<<a[num].doj.day<<"-"<<a[num].doj.mon<<"-"<<a[num].doj.year<<endl;

	return 0;
}
