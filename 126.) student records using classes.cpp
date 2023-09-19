#include<iostream>
using namespace std;
class Student
{
	private:
		int rno;
		char name[30];
	public:
		float marks;
		void input()
		{
			cout<<"Enter R_No, Name, Marks : ";
			cin>>rno>>name>>marks;	
		}
		void show()
		{
			cout<<rno<<"\t"<<name<<"\t"<<marks<<endl;
		}
		void increase(int a)
		{
			marks += a;
			if(marks>100)
				marks = 100;
		}
		void grade()
		{
			if(marks > 90)
			cout<<rno<<"\t"<<name<<"\t"<<marks<<"\t"<<" A+"<<endl;
			else if(marks > 80 && marks <= 90)
			cout<<rno<<"\t"<<name<<"\t"<<marks<<"\t"<<" A"<<endl;
			else if(marks > 70 && marks <= 80)
			cout<<rno<<"\t"<<name<<"\t"<<marks<<"\t"<<" B"<<endl;
			else if(marks > 60 && marks <= 70)
			cout<<rno<<"\t"<<name<<"\t"<<marks<<"\t"<<" C"<<endl;
			else
			cout<<rno<<"\t"<<name<<"\t"<<marks<<"\t"<<" D"<<endl;
		}
		float mark()
		{
			return marks;
		}
};
int main()
{
	int n,ch;
	cout<<"Enter Number of Student : ";
	cin>>n;
	float m[n],num;
	Student a[n];
	do{
	cout<<"Press 1 : to add stu details"<<endl;
	cout<<"Press 2 : to show stu records"<<endl;
	cout<<"Press 3 : to show grade-wise records"<<endl;
	cout<<"Press 4 : to increase marks of all students"<<endl;
	cout<<"Press 5 : to show the topper"<<endl;
	cout<<"Press 6 : to exit"<<endl;
	cin>>ch;
	switch(ch)
	{
	case 1:
	for(int i=0;i<n;i++)
		a[i].input();
	break;
	
	case 2:
	cout<<"*****************************"<<endl;
	cout<<"R_NO\tNAME\tMARKS"<<endl;
	for(int i =0;i<n;i++)
		a[i].show();
	cout<<"*****************************"<<endl;
	break;
	
	case 3:
	cout<<"*****************************"<<endl;
	cout<<"R_NO\tNAME\tMARKS\tGRADE"<<endl;
	for(int i=0;i<n;i++)
		a[i].grade();
	cout<<"*****************************"<<endl;
	break;
	
	case 4:
	cout<<"Enter Marks to be Increased : ";
	cin>>num;
	for(int i=0;i<n;i++)
		a[i].increase(num);
	break;
	
	case 5:
	for(int i=0;i<n;i++)
		m[i] = a[i].mark();
	int max;
	float max2=0;
	for(int i=0;i<n;i++)
	{
		if(max2<m[i])
		{
			max2 = m[i];
			max = i;
		}
	}
	cout<<"*****************************"<<endl;
	cout<<"R_NO\tNAME\tMARKS\tGRADE"<<endl;
	a[max].grade();
	cout<<"*****************************"<<endl;
	break;
	}
	}while(ch!=6);
	return 0;
}
