/*
to input name and marks of stu and print whether
he qualifies or not
*/
#include<iostream>
using namespace std;
int main()
{
	int marks;
	char name[20];
	cout<<"\n\nSTUDENT's RESULT"<<endl;
	cout<<"Enter Marks : ";
	cin>>marks;
	cout<<"Enter Name : ";
	cin>>name;
	if (marks >= 50)
	cout<<name<<" is Qualified"<<endl;
	else
	cout<<name<<" is Not Qulified"<<endl;
	cout<<"THANKS FOR VISITING"<<endl;
	return 0;
}
