//WAP to input a month number and print number of days in it using switch
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a Month Number : ";
	cin>>num;
	switch(num)
	{
		case 1:
			cout<<"There are 31 Days in this Month !!!"<<endl;
			break;
		case 2:
			cout<<"There are 28 Days in this Month !!!"<<endl;
			break;
		case 3:
			cout<<"There are 31 Days in this Month !!!"<<endl;
			break;
		case 4:
			cout<<"There are 30 Days in this Month !!!"<<endl;
			break;
		case 5:
			cout<<"There are 31 Days in this Month !!!"<<endl;
			break;
		case 6:
			cout<<"There are 30 Days in this Month !!!"<<endl;
			break;
		case 7:
			cout<<"There are 31 Days in this Month !!!"<<endl;
			break;
		case 8:
			cout<<"There are 31 Days in this Month !!!"<<endl;
			break;
		case 9:
			cout<<"There are 30 Days in this Month !!!"<<endl;
			break;
		case 10:
			cout<<"There are 31 Days in this Month !!!"<<endl;
			break;
		case 11:
			cout<<"There are 30 Days in this Month !!!"<<endl;
			break;
		case 12:
			cout<<"There are 31 Days in this Month !!!"<<endl;
			break;
		default:
		cout<<"Invalid Month Number"<<endl;
			
	}
	return 0;
}
