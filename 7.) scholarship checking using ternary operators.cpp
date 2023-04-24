/*
to input marks in PCM and print scholarship given
if student scores more than 90 in any of the three
*/
#include<iostream>
using namespace std;
int main()
{
	int p,c,m;
	cout<<"Enter Marks in Physics : ";
	cin>>p;
	cout<<"Enter Marks in Chemistry : ";
	cin>>c;
	cout<<"Enter Marks in Mathematics : ";
	cin>>m;
	(p > 90 || c > 90 || m > 90)? cout<<"You Got the Scholarship" : cout<<"You didn't get the Scholarship";
	cout<<"\n\n";
	return 0;
}
