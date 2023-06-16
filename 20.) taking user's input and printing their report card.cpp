//using user's input and making a proper report card for them :)
#include<iostream>
using namespace std;
int main()
{
	int p, c, m, cs, eng, total, roll, cls;
	float per;
	char m_name[60], f_name[60], s_name[60], section;
	cout<<"Enter Student's Name : ";
	cin>>s_name;
	cout<<"Enter Father's Name : ";
	cin>>f_name;
	cout<<"Enter Mother's Name : ";
	cin>>m_name;
	cout<<"Enter Student's Class (11/12) : ";
	cin>>cls;
	cout<<"Enter Student's Section (A/B/C) : ";
	cin>>section;
	cout<<"Enter Student's Roll Number : ";
	cin>>roll;
	cout<<"\n\t\tSTORING DATA.....!!\n";
	cout<<"Enter Marks in Physics : ";
	cin>>p;
	cout<<"Enter Marks in Chemistry : ";
	cin>>c;
	cout<<"Enter Marks in Mathematics : ";
	cin>>m;
	cout<<"Enter Marks in Computer Science : ";
	cin>>cs;
	cout<<"Enter Marks in English : ";
	cin>>eng;
	total = p+ c+ m+ cs+ eng;
	per = float(total / 5);
	cout<<"\n\n-------------------------------------------------"<<endl;
	cout<<"NAME    :      "<<s_name<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"MOTHER'S NAME    :      "<<m_name<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"father's NAME    :      "<<f_name<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"CLASS & SECTION    :      "<<cls<<section<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"ROLL NUM    :   "<<roll<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"TOTAL MARKS SCORED(out of 500) : "<<total<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"Percentage scored(%) : "<<per<<endl;
	cout<<"-------------------------------------------------"<<endl;
	if (per >= 60)
	cout<<"Congrats...!! You've got the Scholarship :')"<<endl;
	else
	cout<<"You should Try Once More :("<<endl;
	cout<<"\n\n-------------------------------------------------"<<endl;
	return 0;
}
