#include<iostream>
using namespace std;
int main()
{
	int dig;
	cout<<"Enter a day number (1-7) : ";
	cin>>dig;
	if (dig == 1)
	cout<<"Sunday"<<endl;
	else if (dig ==2)
	cout<<"Monday"<<endl;
	else if (dig == 3)
	cout<<"Tuesday"<<endl;
	else if (dig == 4)
	cout<<"Wednesday"<<endl;
	else if (dig == 5)
	cout<<"Thursday"<<endl;
	else if (dig == 6)
	cout<<"Friday"<<endl;
	else if (dig == 7)
	cout<<"Saturday"<<endl;
	else
	cout<<"Invalid Number -__-"<<endl;
	return 0;
}
