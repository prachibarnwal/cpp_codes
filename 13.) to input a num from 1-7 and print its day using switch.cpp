#include<iostream>
using namespace std;
int main()
{
	int dig;
	cout<<"Enter a day number (1-7) : ";
	cin>>dig;
	switch(dig)
	{
		case 1:
		cout<<"SUNDAY"<<endl;
		break;
		case 2:
		cout<<"MONDAY"<<endl;
		break;
		case 3:
		cout<<"TUESDAY"<<endl;
		break;
		case 5:
		cout<<"THURSDAY"<<endl;
		break;
		case 6:
		cout<<"FRIDAY"<<endl;
		break;
		case 7:
		cout<<"SATURDAY"<<endl;
		break;
		case 4:
		cout<<"WEDNESDAY"<<endl;
		break;
		default:
		cout<<"Invalid Day Number -__-"<<endl;
	}
	return 0;
}
