#include<iostream>
using namespace std;
struct Add{
	int str_no;
	char city[60],country[60];
};
struct Employee{
	int empid;
	char name[60];
	int salary;
	Add address;
};
int main()
{
	int i,j,n;
	cout<<"Enter Number of Employees to Add : ";
	cin>>n;
	Employee a[n],ab; 
	for(i=0;i<n;i++)
	{
		cout<<"Enter Id, Name, Salary of Employee "<<i+1<<" : ";
		cin>>a[i].empid>>a[i].name>>a[i].salary;
		cout<<"Enter Address of Employee "<<i+1<<" : "<<endl;
		cout<<"Street Number, City, Country : ";
		cin>>a[i].address.str_no>>a[i].address.city>>a[i].address.country;
	}
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"\t\tEMPLOYEE DETAILS"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"emp_id \t emp_name \t salary \t address "<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	for (i=0;i<n;i++)	
		cout<<a[i].empid<<"\t"<<a[i].name<<"\t"<<a[i].salary<<"\t"<<a[i].address.str_no<<","<<a[i].address.city<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if (a[i].salary < a[j].salary)
			{
				ab = a[i];
				a[i] = a[j];
				a[j] = ab;
			}
		}
	}
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"\tMODIFIED   EMPLOYEE   DETAILS"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"emp_id \t emp_name \t salary \t address "<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	for (i=0;i<n;i++)	
		cout<<a[i].empid<<"\t"<<a[i].name<<"\t"<<a[i].salary<<"\t"<<a[i].address.str_no<<","<<a[i].address.city<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	return 0;
}
