// program to calculate electricty bill

#include<iostream>
using namespace std;
int main()
{
	int unit;
	cout<<"Enter Electricity Units Consumed : ";
	cin>>unit;
	if (unit <= 200)
	cout<<"Total Electricity Bill is : "<<unit<<endl;
	else if (unit > 200 && unit <= 400)
	cout<<"Total Electricity Bill is : "<<200 + (unit - 200) * 4<<endl;
	else if ( unit > 400 && unit <= 600)
	cout<<"Total Electricity Bill is : "<<200 + 200 * 4 + (unit - 400) * 6<<endl;
	else if ( unit > 600 && unit < 1000)
	cout<<"Total Electricity Bill is : "<<200 + 200 * 4 + 200 * 6 + (unit - 600) * 8<<endl;
	else
	cout<<"Total Electricity Bill is : "<<200 + 200 * 4 + 200 * 6 + 400 * 8 + (unit - 1000) * 10<<endl;
	return 0;
}
