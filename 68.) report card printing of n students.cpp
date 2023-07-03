/*
WAP to input total marks of n students.
Calculate their percentage and Print a result sheet.
Also print total number of students passed and failed.
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number of Students : ";
	cin>>n;
	char arr[n][10];
	int marks[n],per[n],p,f,i;
	cout<<"Enter Student's Name and Marks  "<<endl;
	for (i=0;i<n;i++)
	{
		cout<<"Student "<<i+1<<"'s Data : ";
		cin>>arr[i]>>marks[i];
	}
	for (i=0;i<n;i++)
	{
		per[i] = marks[i] / 5.0;
	}
	cout<<"Roll No. \t Name \t Marks \t Percentage \t Result "<<endl;
	for (i=0;i<n;i++)
	{
		cout<<i+1<<" \t\t "<<arr[i]<<" \t "<<marks[i]<<"\t   "<<per[i]<<"\t\t  ";
		if (per[i] >= 50)
		{
			cout<<"PASS"<<endl;
		}
		else
		{
			cout<<"FAIL"<<endl;
		}
	}
}
